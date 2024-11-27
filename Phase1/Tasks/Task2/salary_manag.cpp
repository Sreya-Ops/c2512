#include<iostream>
#include<climits>
using namespace std;

void readSalaries(int salaries[], int number) {
	cout << "Enter Salaries of " << number << " employees:" << endl;;
	for (int i = 0; i < number; i++){
		cout << "Salary of Employee " << (i+1) << ":";
		cin >> salaries[i];
	}
}

int findSecondHighest(int salaries[], int number) {
       if (number < 2) {
	       cout << " Not enough data to find the 2nd highest salary " << endl;
	       return -1;
	}
       
       int highest = INT_MIN, secondHighest = INT_MIN;

       for (int i = 0;i< number;i++) {
	       if (salaries[i] > highest) {
		       secondHighest = highest;
		       highest = salaries[i];
		}
	       else if(salaries[i] > secondHighest && salaries[i] < highest) {
		       secondHighest = salaries[i];
	       }
	       
	}

       if (secondHighest == INT_MIN) {
	       return -1;
	}
       return secondHighest;
}

bool isFiveDigitNumber(int salary){
	return salary >= 10000 && salary <= 99999;
}

void printSalaries(int salaries[], int number) {
	cout << "Employee salaries are:" << endl;
	for (int i = 0; i < number ; i++){
		cout << salaries[i] << " ";
	}
	cout << endl;
}

void Test() {
	int number = 10;
	int salaries[number];

	readSalaries(salaries, number);

	printSalaries(salaries, number);

	int secondHighest = findSecondHighest(salaries, number);

	if (secondHighest == -1) {
		cout <<"Unable to determine the 2nd highest salary" << endl;
	}
	else{
		cout << "Second Highest salary is " << secondHighest << endl;
	}

	if(isFiveDigitNumber(secondHighest)) {
		cout << "Second highest salary is a 5 digit value" << endl;
	}
	else {
		cout << "Second Highest salary is not a 5 digit value" << endl;
	
	}

}

int main(){
	Test();

	return 0;

}


