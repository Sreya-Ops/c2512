#include <iostream>
#include <iomanip>

#include "Patients.h"

int main() {
    Patients p1("P001", 45);
    Patients p2("P002", 50);

    std::cout << std::boolalpha;
    std::cout << "Equals: " << Equals(p1, p2) << std::endl;      
    std::cout << "NotEquals: " << NotEquals(p1, p2) << std::endl;         
    std::cout << "GreaterThan: " << GreaterThan(p1, p2) << std::endl; 
    std::cout << "GreaterThanEquals: " << GreaterThanEquals(p1, p2) << std::endl;
    std::cout << "LessThan: " << LessThan(p1, p2) << std::endl; 
    std::cout << "LessThanEquals: " << LessThanEquals(p1, p2) << std::endl; 

    return 0;
}
