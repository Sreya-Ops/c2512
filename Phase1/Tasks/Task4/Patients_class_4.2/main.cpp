#include <iostream>
#include <iomanip>

#include "patients.h"
#include "comparison.h"

int main() {
    Patients p1("P001", 45);
    Patients p2("P002", 50);
    Comparisons comparisons;

    std::cout << std::boolalpha;
    std::cout << "Equals: " << comparisons.Equals(p1, p2) << std::endl;      
    std::cout << "NotEquals: " << comparisons.NotEquals(p1, p2) << std::endl;         
    std::cout << "GreaterThan: " << comparisons.GreaterThan(p1, p2) << std::endl; 
    std::cout << "GreaterThanEquals: " << comparisons.GreaterThanEquals(p1, p2) << std::endl;
    std::cout << "LessThan: " << comparisons.LessThan(p1, p2) << std::endl; 
    std::cout << "LessThanEquals: " << comparisons.LessThanEquals(p1, p2) << std::endl; 

    return 0;
}
