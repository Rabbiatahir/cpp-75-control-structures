// Program Number: 12
// Control Structure: Nested If
// Difficulty: Difficult
//
// Question:
/* Write a C++ program that takes a person's annual income and age as input and calculates income tax. 
Income up to 1,200,000 is tax-exempt. Income above this limit is taxed at 12% or 20%, depending on the income. 
People under 60 pay an additional 5% surcharge on the base tax. Invalid age or income values display an error message.*/
#include <iostream>
using namespace std;

int main() {
	double income;
	int age;
	
	cout << "Enter your annual income= ";
	cin >> income;
	cout << "Enter your age= ";
	cin >> age;
	
	if (age >= 18 && age <= 100 && income >= 0) {
		if (income <= 1200000) {
			cout << "Tax Exempted." << endl;
		}
		else {
			double base_tax;
			
			if (income > 2500000) {
				base_tax = income * 0.20;
			}
			else {
				base_tax = income * 0.12;
			}
			
			cout << "Base tax= " << base_tax << endl;
		
			if (age < 60) {
				double surcharge = base_tax * 0.05;
				cout << "Surcharge (5%)= " << surcharge << endl;
				cout << "Total tax= " << base_tax + surcharge << endl;
			}
			else {
				cout << "Total tax= " << base_tax << endl;
			}
		}
	}
	else {
		cout << "Invalid Demographic Data." << endl;
	}
	
	return 0;
}
