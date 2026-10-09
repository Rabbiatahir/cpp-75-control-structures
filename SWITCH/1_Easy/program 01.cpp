// Program Number: 1
// Control Structure: Switch Statement
// Difficulty: Easy
/* Question: Write a C++ program that takes an integer (1-7) as input and displays the corresponding day of the week using a switch statement. 
1 represents Monday, up to 7 for Sunday. Invalid numbers display an error message.*/

#include <iostream>
using namespace std;

int main() {
    int day;

    cout << "Enter day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Day: Monday" << endl;
            break;
        case 2:
            cout << "Day: Tuesday" << endl;
            break;
        case 3:
            cout << "Day: Wednesday" << endl;
            break;
        case 4:
            cout << "Day: Thursday" << endl;
            break;
        case 5:
            cout << "Day: Friday" << endl;
            break;
        case 6:
            cout << "Day: Saturday" << endl;
            break;
        case 7:
            cout << "Day: Sunday" << endl;
            break;
        default:
            cout << "Error: Invalid day number. Please enter a value between 1 and 7." << endl;
    }

    return 0;
}
