#!/bin/bash

PROBLEM="$1"

if [ -z "$PROBLEM" ]; then
    echo "Usage: ./test.sh <problemName>"
    echo "Example: ./test.sh twoKnights"
    exit 1
fi

CPP_FILE="${PROBLEM}.cpp"
EXEC_FILE="${PROBLEM}"
TEST_DIR="tests/${PROBLEM}"

# Check if CPP file exists
if [ ! -f "$CPP_FILE" ]; then
    echo "Error: ${CPP_FILE} not found!"
    exit 1
fi

# Compile
echo "Compiling ${CPP_FILE}..."
g++ -std=c++17 -O2 -Wall -DLOCAL "$CPP_FILE" -o "$EXEC_FILE"

if [ $? -ne 0 ]; then
    echo "Compilation failed!"
    exit 1
fi

echo "Compilation successful!"
echo ""

# Check if test directory exists
if [ ! -d "$TEST_DIR" ]; then
    echo "No test cases found in ${TEST_DIR}"
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
    test_num=$(basename "$input_file" | sed 's/input\([0-9]*\).txt/\1/')
    output_file="$TEST_DIR/output${test_num}.txt"
    
    if [ ! -f "$output_file" ]; then
        echo "Warning: No expected output for test ${test_num}"
        continue
    fi
    
    echo "=========================================="
    echo "Test ${test_num}"
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
echo "Results: ${passed} passed, ${failed} failed"
echo "=========================================="

# Remove executable
rm -f "$EXEC_FILE"
