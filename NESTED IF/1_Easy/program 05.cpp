// Program Number: 05
// Control Structure: Nested If
// Difficulty: Easy
//
// Question:
// Write a C++ program to verify whether a given year is a leap year or not using nested if statements.

#include <iostream>
using namespace std;

int main(){
	int year;
	cout << "Enter a year= " ;
	cin >> year;
	
	if (year%4==0) {
		if (year%100==0) {
		
		if (year%400==0) {
			cout << "It is a leap year." << endl;
		}
		else {
			cout << "It is not a leap year." << endl;
		}
	}
		else {
			cout << "It is a leap year." << endl;
		}
	}
	else {
		cout << "It is not a leap year." << endl;
	}

	return 0;
	}
