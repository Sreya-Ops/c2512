2.Without array

Pseudofunctions:

function calculateSum(sum->int, number->int)

    return (sum + number)

function calculateSumTest()

    input number
    totalSum = 0

    for i from 1 to 10
        print i
        input number

        totalSum = calculateSum(totalSum, number)

    print totalSum

Pseudocode:

calculateSumTest()

CODE:

#include<iostream>
using std::cout;
using std::cin;

int calculateSum(int sum, int number)
{
    return (sum + number);
    
}

void calculateSumTest(void)
{

    int totalSum = 0;
    int number;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter number " << i << " : ";
        cin >> number;

        totalSum = calculateSum(totalSum, number);
    }

    cout << "Sum of the given numbers is " << totalSum;
}

int main(void)
{
    calculateSumTest();

    return 0;
}

