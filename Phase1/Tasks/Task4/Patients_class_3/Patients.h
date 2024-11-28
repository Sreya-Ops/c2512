#pragma once

#include <string>

using std::string;

class Patients
{
	private:
	       string PatientID;
	       int Age;
	public:
	       //behaviours
	       friend bool Equals(const Patients& first, const Patients& second);
	       friend bool NotEquals(const Patients& first, const Patients& second);
	       friend bool GreaterThan(const Patients& first, const Patients& second);
	       friend bool GreaterThanEquals(const Patients& first, const Patients& second);
	       friend bool LessThan(const Patients& first, const Patients& second);
	       friend bool LessThanEquals(const Patients& first, const Patients& second);
	       
	       //constructor
	       Patients(string p_PatientID, int p_Age);
};


bool Equals(const Patients& first, const Patients& second);
bool NotEquals(const Patients& first, const Patients& second);
bool GreaterThan(const Patients& first, const Patients& second);
bool GreaterThanEquals(const Patients& first, const Patients& second);
bool LessThan(const Patients& first, const Patients& second);
bool LessThanEquals(const Patients& first, const Patients& second);
	       
	       
