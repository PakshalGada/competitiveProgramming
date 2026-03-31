#!/bin/bash

# Usage: ./test.sh filename.cpp
# The script will compile and test automatically

if [ $# -eq 0 ]; then
    echo "Usage: ./test.sh <filename.cpp>"
    exit 1
fi

CPP_FILE="$1"
PROBLEM="${CPP_FILE%.cpp}"
EXEC_FILE="${PROBLEM}"
TEST_DIR="tests/${PROBLEM}"

if [ ! -f "$CPP_FILE" ]; then
    echo "Error: $CPP_FILE not found"
    exit 1
fi

echo "=== Compiling $CPP_FILE ==="
g++ -std=c++17 -O2 -Wall -DLOCAL "$CPP_FILE" -o "$EXEC_FILE" || {
    echo "Compilation failed!"
    exit 1
}

if [ ! -d "$TEST_DIR" ]; then
    echo "No test cases found in $TEST_DIR"
    rm -f "$EXEC_FILE"
    exit 0
fi

echo ""
echo "=== Running Tests ==="
passed=0
failed=0

for input_file in "$TEST_DIR"/input*.txt; do
    if [ ! -f "$input_file" ]; then
        continue
    fi

    test_num=$(basename "$input_file" | sed 's/input\([0-9]*\).txt/\1/')
    output_file="$TEST_DIR/output${test_num}.txt"

    if [ ! -f "$output_file" ]; then
        echo "Warning: $output_file not found, skipping test $test_num"
        continue
    fi

    echo -n "Test ${test_num}: "
    ./"$EXEC_FILE" < "$input_file" > temp_out.txt

    if diff -wq temp_out.txt "$output_file" > /dev/null 2>&1; then
        echo "✓ PASSED"
        ((passed++))
    else
        echo "✗ FAILED"
        echo "  Expected:"
        head -3 "$output_file" | sed 's/^/    /'
        echo "  Got:"
        head -3 temp_out.txt | sed 's/^/    /'
        ((failed++))
    fi
done

rm -f temp_out.txt "$EXEC_FILE"

echo ""
echo "=== Results: $passed passed, $failed failed ==="

if [ $failed -eq 0 ] && [ $passed -gt 0 ]; then
    echo "All tests passed! ✓"
    exit 0
else
    exit 1
fi
