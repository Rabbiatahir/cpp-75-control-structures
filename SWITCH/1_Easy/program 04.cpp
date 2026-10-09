// Program Number: 4
// Control Structure: Switch Statement
// Difficulty: Easy
//
/*Question: Write a C++ program that takes an integer (1-12) as input and displays the corresponding month name using a switch statement. 
1 represents January, up to 12 for December. Invalid numbers display an error message.*/

#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Enter month number (1-12): ";
    cin >> month;

    switch (month) {
        case 1:
            cout << "Month: January" << endl;
            break;
        case 2:
            cout << "Month: February" << endl;
            break;
        case 3:
            cout << "Month: March" << endl;
            break;
        case 4:
            cout << "Month: April" << endl;
            break;
        case 5:
            cout << "Month: May" << endl;
            break;
        case 6:
            cout << "Month: June" << endl;
            break;
        case 7:
            cout << "Month: July" << endl;
            break;
        case 8:
            cout << "Month: August" << endl;
            break;
        case 9:
            cout << "Month: September" << endl;
            break;
        case 10:
            cout << "Month: October" << endl;
            break;
        case 11:
            cout << "Month: November" << endl;
            break;
        case 12:
            cout << "Month: December" << endl;
            break;
        default:
            cout << "Error: Invalid month number. Please enter a value between 1 and 12." << endl;
    }

    return 0;
}
