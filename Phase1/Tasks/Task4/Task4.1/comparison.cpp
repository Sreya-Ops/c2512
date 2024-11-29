hiiiiiiiiiiiiiiiiiiiiiiiii
#include <string>

#include "patients.h"
#include "comparison.h"

using std::string;

bool Comparisons::Equals(const Patients& first, const Patients& second)
{
	return (first.Age == second.Age);
}
bool Comparisons::NotEquals(const Patients& first, const Patients& second)
{
	
	return (first.Age != second.Age);
}
bool Comparisons::GreaterThan(const Patients& first, const Patients& second)
{

	return (first.Age > second.Age);
}
bool Comparisons::GreaterThanEquals(const Patients& first, const Patients& second)
{

	return (first.Age >= second.Age);
}
bool Comparisons::LessThan(const Patients& first, const Patients& second)
{

	return (first.Age < second.Age);
}
bool Comparisons::LessThanEquals(const Patients& first, const Patients& second)
{

	return (first.Age <= second.Age);
}
	       
  
	       
