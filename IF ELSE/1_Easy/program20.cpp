// Program 20
// Control Structure: IF ELSE
// Difficulty: Easy
// Question: Check if a given year is a leap year or not.

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a Leap Year." << endl;
    } else {
        cout << year << " is NOT a Leap Year." << endl;
    }

    return 0;
}
