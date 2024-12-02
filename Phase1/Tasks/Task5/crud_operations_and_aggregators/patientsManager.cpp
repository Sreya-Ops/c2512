#include <iostream>
#include <iomanip>

#include "patientsManager.h"
#include "patients.h"
#include "const.h"

using std::cout;
using std::cin;
using std::setw;

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

    
    pat[numOfPatients].PatientID = PatientID;
    pat[numOfPatients].Age = Age;
    numOfPatients++;

    cout << "Patients created successfully.\n";
}

/**
 * @brief Displays all existing patients in a tabular format.
 */
void PatientsManager::displayAll() {
    if (numOfPatients == 0) {
        cout << "No patients available to display.\n";
        return;
    }

    cout << "--------------------------------\n";
    cout << "|   PatientID | Age                    |\n";
    cout << "--------------------------------\n";
    for (int i = 0; i < numOfPatients; i++) {
        cout << "| " << setw(10) << pat[i].PatientID << " | "
             << setw(15) << pat[i].Age << " |\n";
    }
    cout << "-------------------------------\n";
}

/**
 * @brief Finds the index of a Patient by PatientID.
 * @param PatientID Patients PatientID to search for.
 * @return Index of the Patients id if found, -1 otherwise.
 */
int PatientsManager::findIndexById(string PatientID) {
    for (int i = 0; i < numOfPatients; i++) {
        if (pat[i].PatientID == PatientID) {
            return i;
        }
    }
    return -1;
}

/**
 * @brief Edits an existing Patient by PatientID.
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

    cout << "Patients updated successfully.\n";
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

    cout << "Patients deleted successfully.\n";
}

PatientsManager::PatientsManager() {
    numOfPatients = 0;
}

