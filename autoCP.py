import os
import shutil
import re
from pathlib import Path
from bs4 import BeautifulSoup
import subprocess

def to_camel_case(s):

    s = re.sub(r'[^a-zA-Z0-9\s]', '', s)
    parts = s.split()
    if len(parts) == 0:
        return 'problem'

    if len(parts[0]) <= 2 and (parts[0].isupper() or parts[0].endswith('.')):
        parts = parts[1:]
    if not parts:
        return 'problem'

    return parts[0].lower() + ''.join(word.capitalize() for word in parts[1:])

def extract_test_cases(soup, platform):
    """Extract input/output test cases from the HTML"""
    test_cases = []
    
    if platform == 'cses':

        examples_section = soup.find('h1', text=lambda t: t and 'Example' in t)
        if examples_section:

            current = examples_section.next_sibling
            inputs = []
            outputs = []
            
            while current:
                if hasattr(current, 'name'):
                    if current.name == 'h1':
                        break
                    if current.name == 'pre':
                        text = current.text.strip()

                        if len(inputs) == len(outputs):
                            inputs.append(text)
                        else:
                            outputs.append(text)
                current = current.next_sibling
            
            for inp, out in zip(inputs, outputs):
                test_cases.append({'input': inp, 'output': out})
    
    elif platform == 'codeforces':
        sample_test = soup.find('div', class_='sample-test')
        if sample_test:
            inputs = sample_test.find_all('div', class_='input')
            outputs = sample_test.find_all('div', class_='output')
            
            for inp_div, out_div in zip(inputs, outputs):

                inp_pre = inp_div.find('pre')
                out_pre = out_div.find('pre')
                
                if inp_pre and out_pre:
                    test_cases.append({
                        'input': inp_pre.text.strip(),
                        'output': out_pre.text.strip()
                    })
    
    elif platform == 'atcoder':
        h3_tags = soup.find_all('h3')
        
        sample_inputs = []
        sample_outputs = []
        
        for h3 in h3_tags:
            h3_text = h3.get_text()
            if 'Sample Input' in h3_text:
                pre_tag = h3.find_next('pre')
                if pre_tag:
                    sample_inputs.append(pre_tag.text.strip())
            elif 'Sample Output' in h3_text:
                pre_tag = h3.find_next('pre')
                if pre_tag:
                    sample_outputs.append(pre_tag.text.strip())
        
        for inp, out in zip(sample_inputs, sample_outputs):
            test_cases.append({
                'input': inp,
                'output': out
            })
    
    return test_cases

def create_test_files(folder, camel_name, test_cases):
    """Create input and output test files"""
    tests_folder = folder / 'tests' / camel_name
    tests_folder.mkdir(parents=True, exist_ok=True)
    
    for i, test in enumerate(test_cases, 1):

        input_file = tests_folder / f'input{i}.txt'
        with open(input_file, 'w') as f:
            f.write(test['input'])
        
        output_file = tests_folder / f'output{i}.txt'
        with open(output_file, 'w') as f:
            f.write(test['output'])
    
    print(f"Created {len(test_cases)} test case(s) in {tests_folder}")
    return tests_folder

def create_test_script(folder, camel_name):
    """Create a shell script to compile and test the solution"""
    test_script = folder / 'test.sh'
    
    script_content = f"""#!/bin/bash

PROBLEM="$1"

if [ -z "$PROBLEM" ]; then
    echo "Usage: ./test.sh <problemName>"
    echo "Example: ./test.sh twoKnights"
    exit 1
fi

CPP_FILE="${{PROBLEM}}.cpp"
EXEC_FILE="${{PROBLEM}}"
TEST_DIR="tests/${{PROBLEM}}"

# Check if CPP file exists
if [ ! -f "$CPP_FILE" ]; then
    echo "Error: ${{CPP_FILE}} not found!"
    exit 1
fi

# Compile
echo "Compiling ${{CPP_FILE}}..."
g++ -std=c++17 -O2 -Wall -DLOCAL "$CPP_FILE" -o "$EXEC_FILE"

if [ $? -ne 0 ]; then
    echo "Compilation failed!"
    exit 1
fi

echo "Compilation successful!"
echo ""

# Check if test directory exists
if [ ! -d "$TEST_DIR" ]; then
    echo "No test cases found in ${{TEST_DIR}}"
    exit 0
fi

# Run tests
passed=0
failed=0

for input_file in "$TEST_DIR"/input*.txt; do
    if [ ! -f "$input_file" ]; then
        continue
    fi
    
    # Extract test number
    test_num=$(basename "$input_file" | sed 's/input\\([0-9]*\\).txt/\\1/')
    output_file="$TEST_DIR/output${{test_num}}.txt"
    
    if [ ! -f "$output_file" ]; then
        echo "Warning: No expected output for test ${{test_num}}"
        continue
    fi
    
    echo "=========================================="
    echo "Test ${{test_num}}"
    echo "=========================================="
    
    # Run the program
    ./"$EXEC_FILE" < "$input_file" > temp_output.txt
    
    # Show input
    echo "Input:"
    cat "$input_file"
    echo ""
    
    # Compare outputs
    if diff -wq temp_output.txt "$output_file" > /dev/null; then
        echo "Status: PASSED"
        ((passed++))
    else
        echo "Status: FAILED"
        echo ""
        echo "Expected Output:"
        cat "$output_file"
        echo ""
        echo "Your Output:"
        cat temp_output.txt
        ((failed++))
    fi
    echo ""
done

# Cleanup
rm -f temp_output.txt

echo "=========================================="
echo "Results: ${{passed}} passed, ${{failed}} failed"
echo "=========================================="

# Remove executable
rm -f "$EXEC_FILE"
"""
    
    with open(test_script, 'w') as f:
        f.write(script_content)
    
    # Make script executable
    os.chmod(test_script, 0o755)
    print(f"Created test script: {test_script}")

def parse_problem(html_path):
    with open(html_path, 'r', encoding='utf-8') as f:
        soup = BeautifulSoup(f, 'html.parser')
    
    # Detect platform based on folder name or content
    folder_name = html_path.parent.name.lower()
    filename = html_path.name.lower()
    
    if 'cses' in folder_name or 'cses' in filename:
        platform = 'cses'
    elif 'codeforces' in folder_name or 'codeforces' in filename:
        platform = 'codeforces'
    elif 'atcoder' in folder_name or 'atcoder' in filename:
        platform = 'atcoder'
    else:
        # Try to detect based on HTML content
        if soup.find('meta', property='og:site_name', content='AtCoder'):
            platform = 'atcoder'
        elif soup.find('div', class_='problem-statement'):
            platform = 'codeforces'
        else:
            print(f"Unknown platform for {html_path}")
            return None
    
    title = ''
    input_desc = ''
    output_desc = ''
    
    if platform == 'cses':
        # Title
        h1 = soup.find('h1')
        title = h1.text.strip() if h1 else ''
        
        # Input section
        input_h = soup.find('h1', id='input') or soup.find('h1', text=lambda t: t and 'Input' in t)
        if input_h:
            sib = input_h.next_sibling
            while sib and (not (hasattr(sib, 'name') and sib.name == 'h1')):
                if hasattr(sib, 'name') and sib.name in ['p', 'pre']:
                    input_desc += sib.text.strip() + '\n'
                sib = sib.next_sibling
        
        # Output section
        output_h = soup.find('h1', id='output') or soup.find('h1', text=lambda t: t and 'Output' in t)
        if output_h:
            sib = output_h.next_sibling
            while sib and (not (hasattr(sib, 'name') and sib.name == 'h1')):
                if hasattr(sib, 'name') and sib.name in ['p', 'pre']:
                    output_desc += sib.text.strip() + '\n'
                sib = sib.next_sibling
    
    elif platform == 'codeforces':
        # Find problem statement div
        problem_statement = soup.find('div', class_='problem-statement')
        if not problem_statement:
            print(f"Could not find problem-statement in {html_path}")
            return None
        
        # Title
        title_div = problem_statement.find('div', class_='title')
        title = title_div.text.strip() if title_div else ''
        
        # Input section
        input_section = problem_statement.find('div', class_='input-specification') or \
                        problem_statement.find('div', {'class': lambda c: c and 'input' in c})
        if input_section:
            for elem in input_section.find_all(['p', 'pre']):
                input_desc += elem.text.strip() + '\n'
        
        # Output section
        output_section = problem_statement.find('div', class_='output-specification') or \
                         problem_statement.find('div', {'class': lambda c: c and 'output' in c})
        if output_section:
            for elem in output_section.find_all(['p', 'pre']):
                output_desc += elem.text.strip() + '\n'
    
    elif platform == 'atcoder':
        # Title from <title> tag or og:title meta tag
        title_tag = soup.find('title')
        if title_tag:
            title = title_tag.text.strip()
        else:
            # Try meta tag
            meta_title = soup.find('meta', property='og:title')
            if meta_title:
                title = meta_title.get('content', '')
        
        # Input section
        input_h3 = soup.find('h3', text=lambda t: t and t.strip() == 'Input')
        if input_h3:
            # Get the next <p> tag
            next_p = input_h3.find_next('p')
            if next_p:
                input_desc = next_p.text.strip()
            
            # Also get any <pre> tags in the section
            current = input_h3.next_sibling
            while current:
                if hasattr(current, 'name'):
                    if current.name == 'h3':
                        break
                    if current.name == 'pre':
                        input_desc += '\n' + current.text.strip()
                    elif current.name == 'p':
                        input_desc += '\n' + current.text.strip()
                current = current.next_sibling
        
        # Output section
        output_h3 = soup.find('h3', text=lambda t: t and t.strip() == 'Output')
        if output_h3:
            # Get the next <p> tag
            next_p = output_h3.find_next('p')
            if next_p:
                output_desc = next_p.text.strip()
            
            # Also get any following content
            current = output_h3.next_sibling
            while current:
                if hasattr(current, 'name'):
                    if current.name == 'h3':
                        break
                    if current.name == 'p':
                        output_desc += '\n' + current.text.strip()
                current = current.next_sibling
    
    # Extract test cases
    test_cases = extract_test_cases(soup, platform)
    
    return {
        'title': title,
        'input': input_desc.strip(),
        'output': output_desc.strip(),
        'test_cases': test_cases,
        'platform': platform
    }

def create_boilerplate(folder, title, input_desc, output_desc):
    camel_name = to_camel_case(title)
    cpp_path = folder / (camel_name + '.cpp')
    
    if cpp_path.exists():
        print(f"File {cpp_path} already exists, skipping creation.")
        return None, camel_name
    
    with open(cpp_path, 'w') as f:
        # Includes and macros
        f.write('#include <bits/stdc++.h>\n')
        f.write('using namespace std;\n\n')
        
        # Useful type definitions
        f.write('typedef long long ll;\n')
        f.write('typedef vector<int> vi;\n')
        f.write('typedef vector<ll> vll;\n')
        f.write('typedef pair<int, int> pii;\n\n')
        
        # Useful macros
        f.write('#define all(x) (x).begin(), (x).end()\n')
        f.write('#define pb push_back\n')
        f.write('#define mp make_pair\n')
        f.write('#define fi first\n')
        f.write('#define se second\n\n')
        
        # Debug macro (only active in local environment)
        f.write('#ifdef LOCAL\n')
        f.write('#define debug(x) cerr << #x << " = " << (x) << endl\n')
        f.write('#else\n')
        f.write('#define debug(x)\n')
        f.write('#endif\n\n')
        
        # Solve function
        f.write('int main() {\n')
        f.write('    ios_base::sync_with_stdio(false);\n')
        f.write('    cin.tie(NULL);\n')
        f.write('    \n')
        f.write('    \n')
        f.write('}\n')
    
    print(f"Created boilerplate: {cpp_path}")
    return cpp_path, camel_name

def cleanup_downloads_folders(downloads_folder):
    """Remove problem-specific folders from Downloads directory"""
    for item in downloads_folder.iterdir():
        if item.is_dir():
            folder_name = item.name.lower()
            # Check if it's a competitive programming problem folder
            if any(keyword in folder_name for keyword in ['cses', 'codeforces', 'atcoder', 'problem']):
                try:
                    shutil.rmtree(item)
                    print(f"Deleted folder: {item}")
                except Exception as e:
                    print(f"Failed to delete folder {item}: {e}")

# Define paths
downloads_folder = Path.home() / "Downloads"
comp_prog_folder = Path.home() / "competitiveProgramming"

# Subfolders
cses_folder = comp_prog_folder / "cses"
codeforces_folder = comp_prog_folder / "codeforces"
atcoder_folder = comp_prog_folder / "atcoder"

# Create folders if they don't exist
os.makedirs(cses_folder, exist_ok=True)
os.makedirs(codeforces_folder, exist_ok=True)
os.makedirs(atcoder_folder, exist_ok=True)

# Supported HTML extensions
html_extensions = ('.html', '.htm')

# Set to track folders where files were moved
used_folders = set()

# List to track created CPP files
created_cpps = []

# List to track HTML files for deletion
html_files_to_delete = []

# Iterate through all files in Downloads
for file_path in downloads_folder.iterdir():
    if file_path.is_file() and file_path.suffix.lower() in html_extensions:
        filename = file_path.name.lower()
        
        # Determine destination
        destination = None
        if 'cses' in filename:
            destination = cses_folder / file_path.name
            target_folder = cses_folder
        elif 'codeforces' in filename:
            destination = codeforces_folder / file_path.name
            target_folder = codeforces_folder
        elif 'atcoder' in filename or '_-_' in filename:  # AtCoder files often have format like "A_-_Problem.html"
            destination = atcoder_folder / file_path.name
            target_folder = atcoder_folder
        
        if destination:
            print(f"Moving {file_path.name} -> {destination}")
            shutil.move(str(file_path), str(destination))
            used_folders.add(target_folder)
            
            # Parse the moved HTML
            problem_data = parse_problem(destination)
            if problem_data and problem_data['title']:
                cpp_path, camel_name = create_boilerplate(target_folder, 
                                              problem_data['title'], 
                                              problem_data['input'], 
                                              problem_data['output'])
                if cpp_path:
                    created_cpps.append(cpp_path)
                    # Mark HTML for deletion after successful CPP creation
                    html_files_to_delete.append(destination)
                    
                    # Create test cases
                    if problem_data['test_cases']:
                        create_test_files(target_folder, camel_name, problem_data['test_cases'])
                    else:
                        print(f"No test cases found for {problem_data['title']}")
            else:
                print(f"Failed to parse problem data from {destination}")

# Delete HTML files after successful CPP creation
for html_file in html_files_to_delete:
    try:
        os.remove(html_file)
        print(f"Deleted HTML file: {html_file}")
    except Exception as e:
        print(f"Failed to delete {html_file}: {e}")

# Create test scripts in each used folder
for folder in used_folders:
    create_test_script(folder, '')

# Clean up problem folders from Downloads
cleanup_downloads_folders(downloads_folder)

print("\nFile moving and processing completed!")
print("\nTo test your solution, run: ./test.sh <problemName>")
print("Example: ./test.sh twoKnights")

# Open created CPP files in gedit
for cpp in created_cpps:
    subprocess.Popen(['gedit', str(cpp)])

# Open terminals in the used folders
for folder in used_folders:
    subprocess.Popen(['gnome-terminal', '--working-directory=' + str(folder)])
