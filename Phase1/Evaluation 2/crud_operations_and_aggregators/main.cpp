#include <iostream>
#include <string>

#include "const.h"
#include "menu.h"
#include "patients.h"
#include "patientsManager.h"
#include "patientsAggregator.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    PatientsManager manager;
    PatientsAggregator aggregator;
   
    int choice; 

    do {
        printMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        // Menu-driven functionality
        switch (choice) {
            case 1: manager.create();      break;
            case 2: manager.displayAll();  break;
            case 3: manager.editById();    break;
            case 4: manager.deleteById();  break;
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

