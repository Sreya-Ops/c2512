#!/bin/bash

read -p "Enter the number of lines: " N

for ((i = 1; i <= N; i++)); do
    for ((j = 1; j <= i; j++)); do
        echo -n "$j "  
    done
    echo  
done
