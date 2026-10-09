// Program Number: 02
// Control Structure: Nested If
// Difficulty: Easy
//
// Question:
/*Write a C++ program to check if a person is eligible to vote (age >= 18), and if eligible, check if they are eligible 
for a driving license (age >= 21) using nested if.*/


#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
        
        if (age >= 21) {
            cout << "You are also eligible for a Driving License." << endl;
        }
        else {
            cout << "You are not eligible for a Driving License yet (Must be 21 or older)." << endl;
        }
    }
    else {
        cout << "You are not eligible to vote or get a driving license yet." << endl;
    }
    
    return 0;
}
