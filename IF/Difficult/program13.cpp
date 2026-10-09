// Program 13
// Control Structure: IF
// Difficulty: Difficult
// Question: Write a C++ program to check if a given year is a leap year using logical operators in an IF condition.

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a Leap Year." << endl;
    }

    return 0;
}
