// Program Number: 5
// Control Structure: Switch Statement
// Difficulty: Easy
//
/* Question: Write a C++ program that takes a character representing a traffic light color (R for Red, Y for Yellow, G for Green) as input and
 displays the corresponding action message using a switch statement. Invalid characters display an error message.*/

#include <iostream>
using namespace std;

int main() {
    char signal;

    cout << "Enter traffic light signal (R for Red, Y for Yellow, G for Green): ";
    cin >> signal;

    switch (signal) {
        case 'R':
        case 'r':
            cout << "Action: Stop immediately." << endl;
            break;
        case 'Y':
        case 'y':
            cout << "Action: Prepare to go or slow down." << endl;
            break;
        case 'G':
        case 'g':
            cout << "Action: Go / Proceed." << endl;
            break;
        default:
            cout << "Error: Invalid traffic light signal entered." << endl;
    }

    return 0;
}
