#pragma once

#include "patientsManager.h"

class PatientsAggregator {
    
    public:
        int findMin(PatientsManager& manager);
        int findMax(PatientsManager& manager);
        int findSecondMin(PatientsManager& manager);
        int findSecondMax(PatientsManager& manager);
};
