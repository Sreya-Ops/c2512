#pragma once

#include <string>

#include "patients.h"
#include "const.h"

using std::string;

class PatientsManager {
    friend class PatientsAggregator;
    friend int main();
    
    private:
        // attributes
        Patients pat[MAX_PATIENTS];    
        int numOfPatients;
    
    public:
        // support
        int findIndexById(string PatientID);
        
        // behaviours
        void create();
        void displayAll();
        void editById();
        void deleteById();
        
        //
        PatientsManager();
};
