// Program Number: 03
// Control Structure: Nested If
// Difficulty: Easy
//
// Question:
/* Write a C++ program to check if a student has passed an exam (marks >= 50), and if passed,
 check if they achieved a distinction (marks >= 85) using nested if.*/
 
#include <iostream>
using namespace std;

int main() {
	int marks;
	cout << "Enter your marks= ";
	cin >> marks;
	
	if (marks>=50) {
		cout << "You Passed." << endl;
		if (marks>=85) {
			cout << "Passed with Distinction!" << endl;
		}
		else {
			cout << "You passed, but no distinction." << endl;
		}
	}
	else {
		cout << "You Failed." << endl;
	}
	return 0;
}
