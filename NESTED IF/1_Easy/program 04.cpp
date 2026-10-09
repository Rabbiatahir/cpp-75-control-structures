// Program Number: 04
// Control Structure: Nested If
// Difficulty: Easy
//
// Question:
// Write a C++ program for user authentication (login system) using nested if.

#include <iostream>
using namespace std;

int main() {
	string inputusername;
	string savedUsername = "cookiebox";
	string inputpassword;
	string savedpassword= "12340987";
	
   cout << "Enter username= ";
   cin >> inputusername;
   
   if (inputusername==savedUsername) {
   	cout << "Username is correct." << endl;
   	  cout << "Enter password= ";
   cin >> inputpassword;
   	if (inputpassword==savedpassword) {
   		cout << "Password is correct." << endl;
	   }
	   else {
	   	cout << "Invalid Password." << endl;
	   }
   }
   else {
   	cout << "Invalid Username." << endl;
   }
   return 0;
}
