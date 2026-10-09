// Program Number: 06
// Control Structure: Nested If
// Difficulty: Moderate
//
// Question:
// Write a C++ program to find the maximum of three numbers using nested if.

#include <iostream>
using namespace std;

int main() {
	int x,y,z;
	cout << "Enter three numbers= " << endl;
	cin >> x >> y >> z;
	
	if (x>y) {
		if (x>z) {
			cout << x << " is greatest number." << endl;
		}
		else {
			cout << z << " is the greatest number." << endl;
		}
	}
		else  {
			if (y>z) {
				cout << y << " is greatest number" << endl;	
		}
	else {
		cout << z << " is greatest number" << endl;
	}
}
	return 0;
}
	
