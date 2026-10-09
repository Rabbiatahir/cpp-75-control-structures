// Program Number: 08
// Control Structure: Nested If
// Difficulty: Moderate
//
// Question:
// Write a C++ program to calculate a customer discount using nested if.
// First check if the total bill amount is greater than or equal to 5000.
// If yes, check if the customer has a membership card to give a 20 percent discount,
// otherwise give a 10 percent discount. If the bill amount is less than 5000,
// display that no discount is applicable.

#include <iostream>
using namespace std;

int main () {
	int bill;
	char card;
	cout << "Enter total bill= ";
	cin >> bill;
	
	if (bill>=5000) {
		cout << "Do you have membership card?(Y/N)= "<< endl;
		cin >> card;
		if (card=='Y' || card=='y') {
			cout << "You will get 20% discount."<< endl;
		}
		else {
			cout << "You will get 10% discount."<< endl;
		}
	
	}
		else {
			cout << "No discount is applicable." << endl;
		}
	return 0;	
}
