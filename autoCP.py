import os
import shutil
import re
from pathlib import Path
from bs4 import BeautifulSoup
import subprocess

def to_camel_case(s):
    # Remove branding
    s = s.replace('AtCoder', '').replace('Codeforces', '').replace('CSES', '')
    # Replace non-alphanumeric with spaces
    s = re.sub(r'[^a-zA-Z0-9\s]', ' ', s)
    parts = s.split()
    
    if not parts:
        return 'problem'
    
    # Logic to skip the problem letter (e.g., 'A', 'B', 'A1')
    if len(parts[0]) <= 2 and len(parts) > 1:
        parts = parts[1:]
    
    if not parts:
        return 'problem'

    return parts[0].lower() + ''.join(word.capitalize() for word in parts[1:])

def extract_test_cases(soup, platform):
    test_cases = []
    
    if platform == 'cses':
        examples_section = soup.find('h1', string=lambda t: t and 'Example' in t)
        if examples_section:
            current = examples_section.next_sibling
            inputs, outputs = [], []
            while current:
                if hasattr(current, 'name'):
                    if current.name == 'h1': break
                    if current.name == 'pre':
                        text = current.text.strip()
                        if len(inputs) == len(outputs): inputs.append(text)
                        else: outputs.append(text)
                current = current.next_sibling
            for inp, out in zip(inputs, outputs):
                test_cases.append({'input': inp, 'output': out})
    
    elif platform == 'codeforces':
        sample_test = soup.find('div', class_='sample-test')
        if sample_test:
            inputs = sample_test.find_all('div', class_='input')
            outputs = sample_test.find_all('div', class_='output')
            for inp_div, out_div in zip(inputs, outputs):
                inp_pre, out_pre = inp_div.find('pre'), out_div.find('pre')
                if inp_pre and out_pre:
                    test_cases.append({'input': inp_pre.text.strip(), 'output': out_pre.text.strip()})
    
    elif platform == 'atcoder':
        sample_inputs = soup.find_all('section', id=lambda x: x and 'sampleinput' in x.lower())
        sample_outputs = soup.find_all('section', id=lambda x: x and 'sampleoutput' in x.lower())
        for inp_sec, out_sec in zip(sample_inputs, sample_outputs):
            inp_pre, out_pre = inp_sec.find('pre'), out_sec.find('pre')
            if inp_pre and out_pre:
                test_cases.append({'input': inp_pre.text.strip(), 'output': out_pre.text.strip()})
    
    return test_cases

def parse_problem(html_path):
    print(f"\n>>> Parsing: {html_path.name}")
    with open(html_path, 'r', encoding='utf-8') as f:
        soup = BeautifulSoup(f, 'html.parser')
    
    filename = html_path.name.lower()
    
    if 'cses' in filename:
        platform = 'cses'
    elif 'codeforces' in filename:
        platform = 'codeforces'
    elif 'atcoder' in filename or '_-_' in filename or soup.find('meta', property='og:site_name', content='AtCoder'):
        platform = 'atcoder'
    else:
        return None

    title = ''
    if platform == 'atcoder':
        title_tag = soup.find('title')
        if title_tag:
            full_title = title_tag.text.split(' - AtCoder')[0].strip()
            if ' - ' in full_title:
                parts = full_title.split(' - ')
                # Skip the letter part (A, B, C...)
                title = parts[1] if len(parts[0]) <= 3 else parts[0]
            else:
                title = full_title
    elif platform == 'codeforces':
        title_div = soup.find('div', class_='title')
        # Skip the leading letter like "A. "
        title = re.sub(r'^[A-Z][0-9]?\.\s*', '', title_div.text.strip()) if title_div else ''
    elif platform == 'cses':
        h1 = soup.find('h1')
        title = h1.text.strip() if h1 else ''

    return {
        'title': title,
        'test_cases': extract_test_cases(soup, platform),
        'platform': platform
    }

def create_boilerplate(folder, title):
    camel_name = to_camel_case(title)
    cpp_path = folder / (camel_name + '.cpp')
    
    if cpp_path.exists():
        return None, camel_name
    
    # YOUR ORIGINAL BOILERPLATE RESTORED
    with open(cpp_path, 'w') as f:
        f.write('#include <bits/stdc++.h>\n')
        f.write('using namespace std;\n\n')
        f.write('typedef long long ll;\n')
        f.write('typedef vector<int> vi;\n')
        f.write('typedef vector<ll> vll;\n')
        f.write('typedef pair<int, int> pii;\n\n')
        f.write('#define all(x) (x).begin(), (x).end()\n')
        f.write('#define pb push_back\n')
        f.write('#define mp make_pair\n')
        f.write('#define fi first\n')
        f.write('#define se second\n\n')
        f.write('#ifdef LOCAL\n')
        f.write('#define debug(x) cerr << #x << " = " << (x) << endl\n')
        f.write('#else\n')
        f.write('#define debug(x)\n')
        f.write('#endif\n\n')
        f.write('int main() {\n')
        f.write('    ios_base::sync_with_stdio(false);\n')
        f.write('    cin.tie(NULL);\n')
        f.write('    \n')
        f.write('    \n')
        f.write('}\n')
    
    print(f"    CREATED: {cpp_path.name}")
    return cpp_path, camel_name

def create_test_files(folder, camel_name, test_cases):
    tests_folder = folder / 'tests' / camel_name
    tests_folder.mkdir(parents=True, exist_ok=True)
    for i, test in enumerate(test_cases, 1):
        with open(tests_folder / f'input{i}.txt', 'w') as f: f.write(test['input'])
        with open(tests_folder / f'output{i}.txt', 'w') as f: f.write(test['output'])

def create_test_script(folder):
    test_script = folder / 'test.sh'
    script_content = """#!/bin/bash
PROBLEM="$1"
CPP_FILE="${PROBLEM}.cpp"
EXEC_FILE="${PROBLEM}"
TEST_DIR="tests/${PROBLEM}"
g++ -std=c++17 -O2 -Wall -DLOCAL "$CPP_FILE" -o "$EXEC_FILE" || exit 1
passed=0; failed=0
for input_file in "$TEST_DIR"/input*.txt; do
    test_num=$(basename "$input_file" | sed 's/input\\([0-9]*\\).txt/\\1/')
    output_file="$TEST_DIR/output${test_num}.txt"
    ./"$EXEC_FILE" < "$input_file" > temp_out.txt
    if diff -wq temp_out.txt "$output_file" > /dev/null; then
        echo "Test ${test_num}: PASSED"
        ((passed++))
    else
        echo "Test ${test_num}: FAILED"
        ((failed++))
    fi
done
rm -f temp_out.txt "$EXEC_FILE"
echo "Results: ${passed} passed, ${failed} failed"
"""
    with open(test_script, 'w') as f: f.write(script_content)
    os.chmod(test_script, 0o755)

# --- Execution ---
downloads_folder = Path.home() / "Downloads"
cp_folder = Path.home() / "competitiveProgramming"
platforms = {'cses': cp_folder / "cses", 'codeforces': cp_folder / "codeforces", 'atcoder': cp_folder / "atcoder"}

for p_path in platforms.values(): os.makedirs(p_path, exist_ok=True)

created_cpps = []
used_folders = set()

for file_path in downloads_folder.iterdir():
    if file_path.is_file() and file_path.suffix.lower() in ('.html', '.htm'):
        data = parse_problem(file_path)
        if data and data['title']:
            target = platforms[data['platform']]
            cpp_path, camel_name = create_boilerplate(target, data['title'])
            if cpp_path:
                created_cpps.append(cpp_path)
                create_test_files(target, camel_name, data['test_cases'])
                used_folders.add(target)
                os.remove(file_path)

for folder in used_folders: create_test_script(folder)

for cpp in created_cpps:
    subprocess.Popen(['gedit', str(cpp)])
    subprocess.Popen(['gnome-terminal', '--working-directory=' + str(cpp.parent)])
