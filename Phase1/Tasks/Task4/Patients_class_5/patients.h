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
	       bool Equals(const Patients& other);
	       bool NotEquals(const Patients& other);
	       bool GreaterThan(const Patients& other);
	       bool GreaterThanEquals(const Patients& other);
	       bool LessThan(const Patients& other);
	       bool LessThanEquals(const Patients& other);
	       
	       //constructor
	       Patients(string p_PatientID, int p_Age);

           //getters-setters
           string GetPatientID();
           int GetAge();
};	       
	       	
	       	
	       
	       
