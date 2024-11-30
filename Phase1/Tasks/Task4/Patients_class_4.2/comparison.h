#pragma once

#include "patients.h"

class Comparisons
{
	public:
	bool Equals(const Patients& first, const Patients& second);
	bool NotEquals(const Patients& first, const Patients& second);
	bool GreaterThan(const Patients& first, const Patients& second);
	bool GreaterThanEquals(const Patients& first, const Patients& second);
    bool LessThan(const Patients& first, const Patients& second);
    bool LessThanEquals(const Patients& first, const Patients& second);
};     
