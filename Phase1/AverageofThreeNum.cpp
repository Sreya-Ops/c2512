//Find the average of three numbers
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    
    cout<< "Enter a:";
    cin>> a;
    
    cout<< "Enter b:";
    cin>>b;
    
    cout<< "Enter c:";
    cin>>c;
    
    float average;
    average=float (a+b+c)/3;
    
    cout<< average;

    return 0;
}