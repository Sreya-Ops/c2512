#include <iostream>
#include <iomanip>
#include <deque>
#include <algorithm>

using namespace std;

// *****Patients Class*****
class Patients {
    friend class PatientsManager;
private:
    string PatientID;
    int Age;

public:
    Patients() = default; 
    Patients(const string& id, int age) : PatientID(id), Age(age) {} 

    string GetPatientID() { return PatientID; }
    int GetAge() { return Age; }
};

// *****PatientsManager Class*****
class PatientsManager {
    friend int main();
private:
    deque<Patients> pat;  

public:
    PatientsManager() = default;
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

    pat.emplace_back(PatientID, Age);
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
    for (size_t i = 0; i < pat.size(); i++) {
        if (pat[i].PatientID == PatientID) {
            return i;
        }
    }
    return -1;  
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
            case 1: manager.create(); break;
            case 2: manager.displayAll(); break;
            case 3: manager.editById(); break;
            case 4: manager.deleteById(); break;
            case 5:
                cout << "Exiting the system. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}
