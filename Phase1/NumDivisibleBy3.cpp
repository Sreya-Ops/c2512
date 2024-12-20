//Number divisible by 3 or not

Pseudo functions:

function isDivisibleByThree(number->int)->bool

    if (number MOD 3 == 0)
        return true
    endif

    return false
	
function isDivisibleByThreeTest()
    input number

    result=isDivisibleByThree(number)
	
    if result
        print"The number is divisible by 3"
    else
        print"The number is not divisible by 3"

Pseudocode:
isDivisibleByThreeTest()

CODE:
#include<iostream>
using std::cout;
using std::cin;

bool isDivisibleByThree(int number)
{
    if(number % 3 == 0)
    {
        return true;
    }
    return false;
}

void isDivisibleByThreeTest(void)
{
    int number;
	
    cout<< "Enter a Number:";
    cin>> number;
	
    int result=isDivisibleByThree(number);
    if(result)
    {
        cout<< "The number is divisible by 3";
    }
    else
    {
        cout<< "The number is not divisible by 3";
    }
}

int main(void)
{
    isDivisibleByThreeTest();
	
    return 0;
}
