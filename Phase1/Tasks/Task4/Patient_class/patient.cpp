#include <string>

#include "patient.h"

using std::string;

bool Patients:: Equals(const Patients& other)
{
	return (Age == other.Age);
}
bool Patients::NotEquals(const Patients& other)
{
	
	return (Age != other.Age);
}
bool Patients::GreaterThan(const Patients& other)
{

	return (Age > other.Age);
}
bool Patients::GreaterThanEquals(const Patients& other)
{

	return (Age >= other.Age);
}
bool Patients::LessThan(const Patients& other)
{

	return (Age < other.Age);
}
bool Patients::LessThanEquals(const Patients& other)
{

	return (Age <= other.Age);
}
	       
//constructor
Patients::Patients(string p_PatientID, int p_Age)
{
	PatientID = p_PatientID;
	Age = p_Age;
}	       	
	       	
	       
	       
