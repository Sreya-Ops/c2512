#include <string>

#include "patients.h"

using std::string;

bool Patients::GreaterThan(const Patients& other)
{
    return (Age > other.Age);
}

bool Patients::LessThan(const Patients& other)
{
    return (Age < other.Age);
}

//getters-setters
string Patients::GetPatientID()
{
    return PatientID;
}
int Patients::GetAge()
{
    return Age;
}
