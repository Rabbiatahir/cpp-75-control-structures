// Program Number: 3
// Control Structure: Else-If 
// Difficulty: Easy
/*Question: Write a C++ program that takes an integer (1-7) as input and displays the corresponding day of the week using an else-if ladder. 
1 represents Monday, 2 represents Tuesday, up to 7 for Sunday. Invalid numbers display an error message.*/

#include <iostream>
using namespace std;

int main() {
    int dayNumber;

    cout << "Enter day number (1-7): ";
    cin >> dayNumber;

    // Else-If Ladder for Day of the Week
    if (dayNumber == 1) {
        cout << "Day: Monday" << endl;
    }
    else if (dayNumber == 2) {
        cout << "Day: Tuesday" << endl;
    }
    else if (dayNumber == 3) {
        cout << "Day: Wednesday" << endl;
    }
    else if (dayNumber == 4) {
        cout << "Day: Thursday" << endl;
    }
    else if (dayNumber == 5) {
        cout << "Day: Friday" << endl;
    }
    else if (dayNumber == 6) {
        cout << "Day: Saturday" << endl;
    }
    else if (dayNumber == 7) {
        cout << "Day: Sunday" << endl;
    }
    else {
        cout << "Error: Invalid day number. Please enter a value between 1 and 7." << endl;
    }

    return 0;
}
