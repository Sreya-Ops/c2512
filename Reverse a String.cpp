Pseudofunctions:

function reverseString(inputString->string)->string
    reversedString = empty string

    for i from length of inputString  - 1 ..0
        reversedString = (reversedString + inputString[i])

    return reversedString

function reverseStringTest()

    input inputString

    reversedString = reverseString(inputString)

    print reversedString

Pseudocode:

reverseStringTest()

CODE:

#include <iostream>
#include <string>
using namespace std;

string reverseString(string& inputString)
{
    string reversedString = " ";

    for(int i = inputString.length() - 1; i >= 0; i--)
    {
        reversedString = reversedString + inputString[i];
    }

    return reversedString;
}

void reverseStringTest(void)
{
    string inputString;

    cout << "Enter a string: ";
    cin >> inputString;

string reversedString = reverseString(inputString);

cout << "Reversed string is : " << reversedString;
}

int main(void)
{
    reverseStringTest();

    return 0;
}
