//Number divisible by 3 or not

Pseudo function:
function isDivisibleByThree(number->)
    if number MOD 3==0
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
using namespace std;

bool isDivisibleByThree(int number){
    if(number%3==0){
        return true;
    }
    return false;
}

void isDivisibleByThreeTest(){
    int number;
    cout<< "Enter a Number:";
    cin>> number;
    int result=isDivisibleByThree(number);
    if(result){
        cout<< "The number is divisible by 3";
    }
    else{
        cout<< "The number is not divisible by 3";
    }
}

int main(){
    isDivisibleByThreeTest();
    return 0;
}
