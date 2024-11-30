#pragma once

#include <string>

using std::string;

class Patients
{
	private:
	       string PatientID;
	       int Age;
	public:
	       
	       //constructor
	       Patients(string p_PatientID, int p_Age);
	      
	       //friends
	       friend class Comparisons;
	       
};


