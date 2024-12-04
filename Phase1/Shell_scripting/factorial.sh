#!/bin/bash

findFact() {
    local num=$1
    local factorial=1

    if [ $num -lt 0 ]; then
        echo "Invalid input! Factorial is not defined for negative numbers."
        return
    fi

    for (( i=1; i<=num; i++ )); do
        factorial=$((factorial * i))
    done

    echo $factorial
}

echo "Test case 1: Input = 5"
result=$(findFact 5)
echo "Factorial of 5 is: $result"

echo "Test case 2: Input = 3"
result=$(findFact 3)
echo "Factorial of 3 is: $result"
