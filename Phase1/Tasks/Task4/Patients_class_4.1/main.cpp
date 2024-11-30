#include <iostream>
#include <iomanip>

#include "patients.h"
#include "comparison.h"

int main() {
    Patients p1("P001", 45);
    Patients p2("P002", 50);

    std::cout << std::boolalpha;
    std::cout << "Equals: " << Comparisons::Equals(p1, p2) << std::endl;      
    std::cout << "NotEquals: " << Comparisons::NotEquals(p1, p2) << std::endl;         
    std::cout << "GreaterThan: " << Comparisons::GreaterThan(p1, p2) << std::endl; 
    std::cout << "GreaterThanEquals: " << Comparisons::GreaterThanEquals(p1, p2) << std::endl;
    std::cout << "LessThan: " << Comparisons::LessThan(p1, p2) << std::endl; 
    std::cout << "LessThanEquals: " << Comparisons::LessThanEquals(p1, p2) << std::endl; 

    return 0;
}
