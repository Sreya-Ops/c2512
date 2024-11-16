//Check a number is divisible by 27 or not

Pseudo functions:

function isDivisibleByTwentySeven(number->int)->bool

    if (number MOD 27 == 0)
        return true
    endif

    return false
	
function isDivisibleByTwentySevenTest()
    input number

    result=isDivisibleByTwentySeven(number)
	
    if result
        print"The number is divisible by 27"
    else
        print"The number is not divisible by 27"

Pseudocode:

isDivisibleByTwentySevenTest()

CODE:

#include<iostream>
using std::cout;
using std::cin;

bool isDivisibleByTwentySeven(int number)
{
    if(number % 27 == 0)
    {
        return true;
    }
    
    return false;
}

void isDivisibleByTwentySevenTest(void)
{
    int number;
	
    cout<< "Enter a Number:";
    cin>> number;
	
    int result=isDivisibleByTwentySeven(number);
    
    if(result)
    {
        cout<< "The number is divisible by 27";
    }
    else
    {
        cout<< "The number is not divisible by 27";
    }
}

int main(void)
{
    isDivisibleByTwentySevenTest();
	
    return 0;
}