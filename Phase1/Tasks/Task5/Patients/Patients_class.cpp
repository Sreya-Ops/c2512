#include <iostream>
#include <iomanip>

using namespace std;

// *****Const.h*****
// Constants
const int MAX_PATIENTS = 100;

// *****patients.h*****
class Patients {
    friend class PatientsManager;
    private:
        string PatientID;
        int Age;
    public:
        bool GreaterThan(const Patients& other);
        bool LessThan(const Patients& other);
         //getters
        string GetPatientsID();
        int GetAge();
};

// *****PatientsManager.h*****
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
        //constructor
        PatientsManager();
};

//*****PatientsAggregator.h*****
class PatientsAggregator {
    public:
        int findMin(PatientsManager& manager);
        int findMax(PatientsManager& manager);
        int findSecondMin(PatientsManager& manager);
        int findSecondMax(PatientsManager& manager);
};

// *****Menu.h*****
void printMenu();

// *****Main.cpp*****

int main() {
    PatientsManager manager;
    PatientsAggregator aggregator;
   
    int choice; // User's menu choice

    do {
        printMenu(); // Display menu
        cout << "Enter your choice: ";
        cin >> choice;

        // Menu-driven functionality
        switch (choice) {
            case 5: manager.create();    break;
            case 6: manager.displayAll();  break;
            case 7: manager.editById();      break;
            case 8: manager.deleteById();    break;
            case 5: 
                std::cout << "Patient with Min Age: " 
                    << manager.pat[aggregator.findMin(manager)].GetPatientID() 
                    << " with Age " 
                    << manager.pat[aggregator.findMin(manager)].GetAge() 
                    << std::endl;
                break;
            case 6: 
                std::cout << "Patient with Max Age: " 
                    << manager.pat[aggregator.findMax(manager)].GetPatientID() 
                    << " with Age " 
                    << manager.pat[aggregator.findMax(manager)].GetAge() 
                    << std::endl;
                break;
            case 7: 
                std::cout << "Patient with 2nd Min Age: " 
                    << manager.pat[aggregator.findSecondMin(manager)].GetPatientID() 
                    << " with Age " 
                    << manager.pat[aggregator.findSecondMin(manager)].GetAge() 
                    << std::endl;
                break;
            case 8: 
                std::cout << "Patient with 2nd Max Age: " 
                    << manager.pat[aggregator.findSecondMax(manager)].GetPatientID() 
                    << " with Age " 
                    << manager.pat[aggregator.findSecondMax(manager)].GetAge() 
                    << std::endl;
                break;
            case 9:
                cout << "Exiting the system. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 9.\n";
        }
    } while (choice != 9);

    return 0;
}

// *****PatientsManager.cpp*****
/**
 * @brief Creates a new Patient and stores details in arrays. 
 */
void PatientsManager::create() {
    if (numOfPatients >= MAX_PATIENTS) {
        cout << "Error: Maximum Patients limit reached.\n";
        return;
    }

    string PatientID;
    int Age;

    cout << "Enter Patients PatientID: ";
    cin >> PatientID;

    
    if (findIndexById(PatientID) != -1) {
        cout << "Error: Patients PatientID already exists. Please use a unique PatientID.\n";
        return;
    }

    cout << "Enter Age: ";
    cin >> Age;

    // Store the Patients details
    pat[numOfPatients].PatientID = PatientID;
    pat[numOfPatients].Age = Age;
    numOfPatients++;

    cout << "Patient created successfully.\n";
}

/**
 * @brief Displays all existing patient in a tabular format.
 */
void PatientsManager::displayAll() {
    if (numOfPatients == 0) {
        cout << "No patients available to display.\n";
        return;
    }

    cout << "------------------------------------------------\n";
    cout << "|   PatientID | Age                    |\n";
    cout << "------------------------------------------------\n";
    for (int i = 0; i < numOfPatients; i++) {
        cout << "| " << setw(10) << pat[i].PatientID << " | "
             << setw(15) << pat[i].Age << " |\n";
    }
    cout << "------------------------------------------------\n";
}

/**
 * @brief Finds the index of a Patient age by PatientID.
 * @param PatientID Patients PatientID to search for.
 * @return Index of the Patients Age if found, -1 otherwise.
 */
int PatientManager::findIndexById(string PatientID) {
    for (int i = 0; i < numOfPatients; i++) {
        if (pat[i].PatientID == PatientID) {
            return i;
        }
    }
    return -1;
}

/**
 * @brief Edits an existing Patients Age by PatientID.
 */
void PatientsManager::editById() {
    string PatientID;
    cout << "Enter Patients PatientID to edit: ";
    cin >> PatientID;

    int index = findIndexById(PatientID);
    if (index == -1) {
        cout << "Error: Patients PatientID not found.\n";
        return;
    }

    cout << "Current Details - Age: " << pat[index].Age << "\n";

    cout << "Enter New Age: ";
    cin >> pat[index].Age;

    cout << "Patient updated successfully.\n";
}

/**
 * @brief Deletes an existing Patient by PatientID.
 */
void PatientsManager::deleteById() {
    string PatientID;
    cout << "Enter Patients PatientID to delete: ";
    cin >> PatientID;

    int index = findIndexById(PatientID);
    if (index == -1) {
        cout << "Error: Patients PatientID not found.\n";
        return;
    }

    // Shift data to fill the gap
    for (int i = index; i < numOfPatients - 1; i++) {
        pat[i] = pat[i + 1];
    }
    numOfPatients--;

    cout << "Patient deleted successfully.\n";
}

PatientsManager::PatientsManager() {
    numOfPatients = 0;
}
// *****Menu.cpp*****
void printMenu() {
    cout << "\n=== Patients Management Module ===\n";
    cout << "1. Create Patients \n";
    cout << "2. Display All Patients\n";
    cout << "3. Edit Patients\n";
    cout << "4. Delete Patients \n";
    cout << "5. Find Min Age\n";
    cout << "6. Find Max Age\n";
    cout << "7. Find Second Min Age\n";
    cout << "8. Find Second Max Age\n";
    cout << "9. Exit\n";
}

//*****Patients.cpp*****
bool Patients::GreaterThan(const Patients& other)
{
    return (Age > other.Age);
}

bool Patients::LessThan(const Patients& other)
{
    return (Age < other.Age);
}


string Patients::GetPatientID()
{
    return PatientID;
}
int Patients::GetAge()
{
    return Age;
}
//*****PatientsAggregator.cpp*****
// Function to find the index of the Patients with the minimum years of Age
int PatientsAggregator::findMin(PatientsManager& manager) {
    Patients* arr = manager.pat;
    int& n = manager.numOfPatients;
    //
    int minIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i].LessThan(arr[minIndex])) {
            minIndex = i;
        }
    }
    return minIndex;
}

// Function to find the index of the Patients with the maximum years of Age
int PatientsAggregator::findMax(PatientsManager& manager) {
    Patients* arr = manager.pat;
    int& n = manager.numOfPatients;
    //
    int maxIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i].GreaterThan(arr[maxIndex])) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

// Function to find the index of the Patients with the second minimum years of Age
int PatientsAggregator::findSecondMin(PatientsManager& manager) {
    Patients* arr = manager.pat;
    int& n = manager.numOfPatients;
    //
    int minIndex = findMin(manager);
    int secondMinIndex = (minIndex == 0) ? 1 : 0;
    
    for (int i = 0; i < n; ++i) {
        if (i != minIndex) {
            if (arr[i].LessThan(arr[secondMinIndex])) {
                secondMinIndex = i;
            }
        }
    }
    return secondMinIndex;
}

// Function to find the index of the Patients with the second maximum years of Age
int PatientsAggregator::findSecondMax(PatientsManager& manager) {
    Patients* arr = manager.pat;
    int& n = manager.numOfPatients;
    //
    int maxIndex = findMax(manager);
    int secondMaxIndex = (maxIndex == 0) ? 1 : 0;
    
    for (int i = 0; i < n; ++i) {
        if (i != maxIndex) {
            if (arr[i].GreaterThan(arr[secondMaxIndex])) {
                secondMaxIndex = i;
            }
        }
    }
    return secondMaxIndex;
}