#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Constants
const int MAX_PATIENTS = 100;

// *****Patients Class*****
class Patients {
    friend class PatientsManager;
private:
    string PatientID;
    int Age;

public:
    string GetPatientID() { return PatientID; }
    int GetAge() { return Age; }
};

// *****PatientsManager Class*****
class PatientsManager {
    friend int main();

private:
    vector<Patients> pat; 

public:
    int findIndexById(const string& PatientID);
    void create();      
    void displayAll();  
    void editById();    
    void deleteById();  
};

// *****Menu Function*****
void printMenu() {
    cout << "\n=== Patients Management Module ===\n";
    cout << "1. Create Patient\n";
    cout << "2. Display All Patients\n";
    cout << "3. Edit Patient\n";
    cout << "4. Delete Patient\n";
    cout << "5. Exit\n";
}

// *****PatientsManager Definitions*****

void PatientsManager::create() {
    if (pat.size() >= MAX_PATIENTS) {
        cout << "Error: Maximum patient limit reached.\n";
        return;
    }

    string PatientID;
    int Age;

    cout << "Enter Patient's PatientID: ";
    cin >> PatientID;

    if (findIndexById(PatientID) != -1) {
        cout << "Error: PatientID already exists. Please use a unique PatientID.\n";
        return;
    }

    cout << "Enter Age: ";
    cin >> Age;

    Patients newPatient;
    newPatient.PatientID = PatientID;
    newPatient.Age = Age;
    pat.push_back(newPatient);

    cout << "Patient created successfully.\n";
}

void PatientsManager::displayAll() {
    if (pat.empty()) {
        cout << "No patients available to display.\n";
        return;
    }

    cout << "----------------------------------------\n";
    cout << "|   PatientID   |       Age            |\n";
    cout << "----------------------------------------\n";
    for (const auto& patient : pat) {
        cout << "| " << setw(12) << patient.PatientID << " | "
             << setw(20) << patient.Age << " |\n";
    }
    cout << "----------------------------------------\n";
}

int PatientsManager::findIndexById(const string& PatientID) {
    for (size_t i = 0; i < pat.size(); ++i) {
        if (pat[i].PatientID == PatientID) {
            return i;
        }
    }
    return -1; // Not found
}

void PatientsManager::editById() {
    string PatientID;
    cout << "Enter PatientID to edit: ";
    cin >> PatientID;

    int index = findIndexById(PatientID);
    if (index == -1) {
        cout << "Error: PatientID not found.\n";
        return;
    }

    cout << "Current Details - Age: " << pat[index].Age << "\n";
    cout << "Enter New Age: ";
    cin >> pat[index].Age;

    cout << "Patient updated successfully.\n";
}

void PatientsManager::deleteById() {
    string PatientID;
    cout << "Enter PatientID to delete: ";
    cin >> PatientID;

    int index = findIndexById(PatientID);
    if (index == -1) {
        cout << "Error: PatientID not found.\n";
        return;
    }

    pat.erase(pat.begin() + index);
    cout << "Patient deleted successfully.\n";
}

// *****Main Function*****
int main() {
    PatientsManager manager;

    int choice;
    do {
        printMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                manager.create(); 
                break;
            case 2: 
                manager.displayAll(); 
                break;
            case 3: 
                manager.editById(); 
                break;
            case 4: 
                manager.deleteById(); 
                break;
            case 5:
                cout << "Exiting the system. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}
