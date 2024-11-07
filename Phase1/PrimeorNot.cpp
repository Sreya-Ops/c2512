//Check the number is prime or not

#include <iostream> 
#include <math.h> 
using namespace std; 
  
int main() 
{ 
    int num, i, flag = 1; 
  
    cout << "Enter a number: "; 
  
    cin >> num; 
 
    for (i = 2; i <= num/2; i++) { 
  
        if (num % i == 0) { 
            flag = 0; 
            break; 
        } 
    } 
  
    if (num <= 1) 
        flag = 0; 
  
    if (flag == 1) { 
        cout << num << " is a prime number"; 
    } 
    else { 
        cout << num << " is not a prime number"; 
    } 
  
    return 0; 
}