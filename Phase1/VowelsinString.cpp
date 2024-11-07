// Print vowels in a string

Pseudocode
BEGIN
INPUT str
FOR i = 0 TO length of str - 1
IF str[i] == 'a' OR str[i] == 'e' OR str[i] == 'i' OR str[i] == 'o' OR str[i] == 'u' OR
str[i] == 'A' OR str[i] == 'E' OR str[i] == 'I' OR str[i] == 'O' OR str[i] == 'U'
PRINT str[i]
END IF
END FOR
END

Code
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    cin>> str;
    
    cout << "Vowels in the string: ";
    for (int i = 0; i < str.length(); i++) {
      
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
            str[i]== 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            cout << str[i] << " ";
        }
    }

    return 0;
}
