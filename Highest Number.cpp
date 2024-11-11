Pseudofunctions:

function findHighestNumber(number->int, highestnum->int)->int
  if number > highestnum 
        highestnum = number

    return highestnum

function findHighestNumberTest()
    input number

    highestnum = number
    
    for i from 2 ..10
        print i

        highestnum = findHighestNumber(number, highestnum)

            print highestnum

Pseudocode:

  findHighestNumberTest()

CODE:

#include<iostream>
using std::cout;
using std::cin;

int findHighestNumber(int number, int highestnum)
{
    if (number > highestnum)
    {
        highestnum = number ;
    }

    return highestnum;
}

void findHighestNumberTest(void)
{
    int number, highestnum;

    cout << "Enter number 1:";
    cin >> number;

    highestnum = number;

    for (int i = 2; i <= 10; i++)
    {
        cout << "Enter number " << i << " : ";
        cin >> number;
      
        highestnum = findHighestNumber(number, highestnum);
    }
  
    cout << "The highest number is: " << highestnum;
}

int main(void)
{
    findHighestNumberTest();

    return 0;
}
