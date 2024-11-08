//Find Cube of a number

Pseudo function:

function findCube(number->int)
    return number*number*number
   
function findCubeTest()
    input number
    cube=findCube(number)
    Print cube
    
Pseudocode:
findCubeTest()

CODE:
#include<iostream>
using namespace std;

int findCube(int number){
    return number*number*number;
}

void findCubeTest(){
    int number;
    cout<<"Enter a number:";
    cin>>number;
    int cube=findCube(number);
    cout<<cube<<" is the cube of "<<number;
}

int main(){
    findCubeTest();
    return 0;
}
