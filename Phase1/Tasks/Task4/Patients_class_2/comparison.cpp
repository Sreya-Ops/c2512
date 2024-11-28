#include <string>

#include "Patients.h"

using std::string;

bool Equals(const Patients& first, const Patients& second)
{
	return (first.Age == second.Age);
}
bool NotEquals(const Patients& first, const Patients& second)
{
	
	return (first.Age != second.Age);
}
bool GreaterThan(const Patients& first, const Patients& second)
{

	return (first.Age > second.Age);
}
bool GreaterThanEquals(const Patients& first, const Patients& second)
{

	return (first.Age >= second.Age);
}
bool LessThan(const Patients& first, const Patients& second)
{

	return (first.Age < second.Age);
}
bool LessThanEquals(const Patients& first, const Patients& second)
{

	return (first.Age <= second.Age);
}
	       
  
	       
