#include <iostream>
#include <iomanip>

#include "Patients.h"
#include "hospital.h"

int main() {
    Patients p1("P001", 45);
    Patients p2("P002", 50);
    
    HospitalStay hs1("HS001", 5); 
    HospitalStay hs2("HS002", 7);

    std::cout << std::boolalpha;
    std::cout << "Equals: " << Equals(p1, p2) << std::endl;      
    std::cout << "NotEquals: " << NotEquals(p1, p2) << std::endl;         
    std::cout << "GreaterThan: " << GreaterThan(p1, p2) << std::endl; 
    std::cout << "GreaterThanEquals: " << GreaterThanEquals(p1, p2) << std::endl;
    std::cout << "LessThan: " << LessThan(p1, p2) << std::endl; 
    std::cout << "LessThanEquals: " << LessThanEquals(p1, p2) << std::endl; 
    
    std::cout << "Equals: " << Equals(hs1, hs2) << std::endl;      
    std::cout << "NotEquals: " << NotEquals(hs1, hs2) << std::endl;         
    std::cout << "GreaterThan: " << GreaterThan(hs1, hs2) << std::endl; 
    std::cout << "GreaterThanEquals: " << GreaterThanEquals(hs1, hs2) << std::endl;
    std::cout << "LessThan: " << LessThan(hs1, hs2) << std::endl; 
    std::cout << "LessThanEquals: " << LessThanEquals(hs1, hs2) << std::endl; 

    return 0;
}
