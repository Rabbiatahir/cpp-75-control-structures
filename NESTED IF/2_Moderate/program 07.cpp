// Program Number: 07
// Control Structure: Nested If
// Difficulty: Moderate
//
// Question:
// Write a C++ program to evaluate a student's grade based on marks using nested if.
// First check if marks >= 50 for passing. If passed, check if marks >= 80 for 'Grade A',
// marks >= 65 for 'Grade B', otherwise 'Grade C'. If marks < 50, display 'Grade F (Fail)'.

#include <iostream>
using namespace std;

int main() {
	int marks;
	cout << "Enter your marks= ";
	cin >> marks;
	
	if (marks>=50) {
		cout << "You are pass."<< endl;
		
		if (marks>=80) {
			cout << "Grade A." << endl;
		}
		else if (marks>=65) {
			cout << "Grade B." << endl;
		}
		else {
			cout << "Grade C." << endl;
		}
	}
	else {
		cout << "You are fail (F Grade)"<< endl;
	}
	return 0;
}
