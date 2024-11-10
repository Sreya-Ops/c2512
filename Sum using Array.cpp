1.Using array
Pseudofunctions:

function calculateSum(array->int)->int

    sum = 0 

    for i from 0 ..9
        sum = sum + array[i]

    return sum

function calculateSumTest()
    input array of size 10
    for i from 0 ..9
        print i
        input array[i]
    totalSum = calculateSum(array)
    print totalSum

Pseudocode:

calculateSumTest()

#include<iostream>
using namespace std;

int calculateSum(int array[])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum = sum +array[i];
    }
    return sum;
}

void  calculateSumTest(void)
{
    int array[10];

    for(int i = 0; i < 10; i++)
    {
        cout << "Enter number " << (i + 1) << " : ";
        cin >> array[i];
    }
    int totalSum = calculateSum(array);

    cout << " Sum of the numbers is " << totalSum;
}

int main(void)
{
    calculateSumTest();

    return 0;
}  
    
