// Program Number: 09
// Control Structure: Nested If
// Difficulty: Moderate
//
// Question:
// Write a C++ program to check student admission eligibility using nested if.
// First check if the entry test score is greater than or equal to 50.
// If passed, check if the FSC percentage is greater than or equal to 60 for admission,
// otherwise display "Not eligible due to low FSC marks". If test score is less than 50,
// display "Failed in entry test".

#include <iostream>
using namespace std;
int main () {
	int entry_test;
	int percentage;
	
	cout << "Enter your marks in entry test= ";
	cin >> entry_test;
	if (entry_test>=50) {
		cout << "Enter percentage in FSC= " ;
		cin >> percentage;
		if (percentage>=60) {
			cout << "You are eligible for admission." << endl;
		}
		else {
			cout << "Not eligible due to low FSC marks." << endl;
		}
	}
	else {
		cout << "Failed in Entry test." << endl;
	}
	return 0;
}
