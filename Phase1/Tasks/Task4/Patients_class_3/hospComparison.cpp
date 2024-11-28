#include <string>

#include "hospital.h"

using std::string;


bool Equals(const HospitalStay& first, const HospitalStay& second)
{
	return (first.NumberOfDays == second.NumberOfDays);
}
bool NotEquals(const HospitalStay& first, const HospitalStay& second)
{
	
	return (first.NumberOfDays != second.NumberOfDays);
}
bool GreaterThan(const HospitalStay& first, const HospitalStay& second)
{

	return (first.NumberOfDays > second.NumberOfDays);
}
bool GreaterThanEquals(const HospitalStay& first, const HospitalStay& second)
{

	return (first.NumberOfDays >= second.NumberOfDays);
}
bool LessThan(const HospitalStay& first, const HospitalStay& second)
{

	return (first.NumberOfDays < second.NumberOfDays);
}
bool LessThanEquals(const HospitalStay& first, const HospitalStay& second)
{

	return (first.NumberOfDays <= second.NumberOfDays);
}
	       
  
	       
