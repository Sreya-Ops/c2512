#include "patientsAggregator.h"
#include "patientsManager.h"

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
