#include <iostream>
#include <iomanip>

#include "patient.h"

int main() {
    Patients p1("P001", 45);
    Patients p2("P002", 50);

    std::cout << std::boolalpha;
    std::cout << "Equals: " << p1.Equals(p2) << std::endl;          // Output: false
    std::cout << "GreaterThan: " << p1.GreaterThan(p2) << std::endl; // Output: false
    std::cout << "LessThanEquals: " << p1.LessThanEquals(p2) << std::endl; // Output: true

    return 0;
}
