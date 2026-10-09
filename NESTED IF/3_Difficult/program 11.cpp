// Program Number: 11
// Control Structure: Nested If
// Difficulty: Difficult
//
// Question:
// Write a C++ program to calculate electricity bill based on units consumed and customer type using nested if.
// First check if the customer type is Commercial or Residential.
// For Residential: If units are greater than 300, rate is 25 per unit, otherwise rate is 15 per unit.
// For Commercial: If units are greater than 300, rate is 40 per unit, otherwise rate is 30 per unit.
// Display the total bill amount based on the inputs.

#include <iostream>
using namespace std;
int main () {
	string type;
	int units;
	cout << "Enter the units consumed= ";
	cin >> units;
	cout << "Enter the customer type= ";
	cin >> type;
	if (type =="Residential") {
		if (units>300) {
			cout << "Your electricity bill is= " << units*25 << endl;
		}
		else {
			cout << "Your electricity bill is= " << units*15 << endl;
		}
		
	}
	else if (type=="Commercial") {
		if (units>300) {
			cout << "Your electricity bill is= " << units*40 << endl;
		}
		else {
			cout << "Your electricity bill is= " << units*30 << endl;
		}
	}
	return 0;
}
