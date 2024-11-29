#pragma once

#include <string>

using std::string;

class Patients {
    friend class PatientsManager;
    
    private:
        string PatientID;
        int Age;
    
    public:
        bool GreaterThan(const Patients& other);
        bool LessThan(const Patients& other);
        
        //getters-setters
        string GetPatientID();
        int GetAge();
};
