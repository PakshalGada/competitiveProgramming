#!/bin/bash
PROBLEM="$1"
if [ -z "$PROBLEM" ]; then echo "Usage: ./test.sh <problemName>"; exit 1; fi
CPP_FILE="${PROBLEM}.cpp"
EXEC_FILE="${PROBLEM}"
TEST_DIR="tests/${PROBLEM}"
g++ -std=c++17 -O2 -Wall -DLOCAL "$CPP_FILE" -o "$EXEC_FILE" || exit 1
passed=0; failed=0
for input_file in "$TEST_DIR"/input*.txt; do
    test_num=$(basename "$input_file" | sed 's/input\([0-9]*\).txt/\1/')
    output_file="$TEST_DIR/output${test_num}.txt"
    ./"$EXEC_FILE" < "$input_file" > temp_output.txt
    if diff -wq temp_output.txt "$output_file" > /dev/null; then
        echo "Test ${test_num}: PASSED"
        ((passed++))
    else
        echo "Test ${test_num}: FAILED"
        ((failed++))
    fi
done
rm -f temp_output.txt "$EXEC_FILE"
echo "Results: ${passed} passed, ${failed} failed"
