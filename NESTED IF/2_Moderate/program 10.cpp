// Program Number: 10
// Control Structure: Nested If
// Difficulty: Moderate
//
// Question:
/*Write a C++ program for an ATM cash withdrawal system using nested if.
First check if the entered PIN matches 1234. If correct, check if the withdrawal amount
 is less than or equal to the account balance of 20000. If yes, display "Transaction Successful",
 otherwise display "Insufficient Balance". If PIN is incorrect, display "Invalid PIN".*/
 
 #include <iostream>
 using namespace std;
 int main () {
 	int pin;
 	int amount;
 	cout << "Enter PIN= ";
 	cin >> pin;
 	if (pin==1234) {
 		cout << "Enter withdrawal amount= ";
 		cin>> amount;
 		if (amount<=20000) {
 			cout << "Transaction Successful." << endl;
		 }
		 else {
		 	cout << "Insufficient Balance." << endl;
		 }
	 }
	 else {
	 	cout << "Invalid PIN." << endl;
	 }
	 return 0;
 }
