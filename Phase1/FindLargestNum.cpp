// Finding largest number

Pseudocode
BEGIN 
INPUT n1,n2,n3
IF n1 >= n2 AND n1 >= n3
        PRINT n1 is the largest
    ELSE IF n2 >= n1 AND n2 >= n3
        PRINT n2 is the largest
    ELSE
        PRINT n3 is the largest
    END IF
END


#include <iostream>
using namespace std;

int main() {
    int n1,n2,n3;
    
    cout << "Enter first number: "; 
    cin >> n1; 
    
    cout << "Enter second number: "; 
    cin >> n2;
    
    cout << "Enter third number: "; 
    cin >> n3; 

    if (n1 >= n2 && n1 >= n3)
        cout << n1 << "is the largest" ;
    else if (n2 >= n1 && n2 >= n3)
        cout << n2 << " is the largest" ;
    else
        cout << n3 << " is the largest" ;

    return 0;
}
