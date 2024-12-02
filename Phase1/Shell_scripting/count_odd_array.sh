#!/bin/bash
nums=(5 2 13 7 12 13 9) #array 

odd_count=0

for (( I = 0; I < ${#nums[@]}; I++ )); do
    if [ $(( ${nums[I]} % 2 )) -eq 0 ]; then
        continue;
    else
       (( odd_count ++ ))
    fi
done

echo "Number of odd numbers in the array is is $odd_count"
