#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: "; 
  
    cin >> num; 
  
    int output= num & 1;

    if (output== 0)
        cout << "Even";

    else
        cout << "Odd";
    return 0;
}
