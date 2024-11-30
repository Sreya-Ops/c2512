#include <climits>

#include "patients.h"

// Function to find the index of the Patients with the minimum Age
int findMinAge(Patients arr[], int n) {
    int minIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i].LessThan(arr[minIndex])) {
            minIndex = i;
        }
    }
    return minIndex;
}

// Function to find the index of the Patients with the maximum Age
int findMaxAge(Patients arr[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i].GreaterThan(arr[maxIndex])) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

// Function to find the index of the Patients with the second minimum Age
int findSecondMinAge(Patients arr[], int n) {
    int minIndex = findMinAge(arr, n);
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

// Function to find the index of the Patients with the second maximum Age
int findSecondMaxAge(Patients arr[], int n) {
    int maxIndex = findMaxAge(arr, n);
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