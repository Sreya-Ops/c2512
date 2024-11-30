#pragma once

#include "patients.h"

class Comparisons
{
	public:
	static bool Equals(const Patients& first, const Patients& second);
	static bool NotEquals(const Patients& first, const Patients& second);
	static bool GreaterThan(const Patients& first, const Patients& second);
	static bool GreaterThanEquals(const Patients& first, const Patients& second);
        static bool LessThan(const Patients& first, const Patients& second);
        static bool LessThanEquals(const Patients& first, const Patients& second);
};     
