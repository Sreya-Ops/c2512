#include <iostream>
#include <string>

#include "patients.h"
#include "array.h"

int main() {
    Patients Patient[] = {
        Patients("P001", 45),
        Patients("P002", 50),
        Patients("P003", 20),
        Patients("P004", 63),
        Patients("P005", 18)
    };

    int n = sizeof(Patient) / sizeof(Patient[0]);
    
    std::cout << "Patient with Min Age: " << Patient[findMinAge(Patient, n)].GetPatientID() << " with Age " << Patient[findMinAge(Patient, n)].GetAge() << std::endl;
    std::cout << "Patient with Max Age: " << Patient[findMaxAge(Patient, n)].GetPatientID() << " with Age " << Patient[findMaxAge(Patient, n)].GetAge() << std::endl;
    std::cout << "Patient with 2nd Min Age: " << Patient[findSecondMinAge(Patient, n)].GetPatientID() << " with Age " << Patient[findSecondMinAge(Patient, n)].GetAge() << std::endl;
    std::cout << "Patient with 2nd Max Age: " << Patient[findSecondMaxAge(Patient, n)].GetPatientID() << " with Age " << Patient[findSecondMaxAge(Patient, n)].GetAge() << std::endl;

    return 0;
}


