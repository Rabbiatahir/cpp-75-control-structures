// Program Number: 01
// Control Structure: Nested If
// Difficulty: Easy
//
// Question:
// Write a C++ program to check if a number is positive, and if it is positive, check whether it is even or odd using nested if.


#include <iostream>
using namespace std;

int main () {
	int num;
	cout << "Enter an integer= " << endl;
	cin >> num;
	
	if (num>=0) {
		cout << "It is a positive integer." << endl;
		if (num%2==0) {
			cout << "It is an even number." << endl;
		}
	}
	else {
		cout << "It is a negative integer." << endl;
	}
	return 0;
}
