// Program 01
// Control Structure: IF
// Difficulty: Easy
// Question: Write a C++ program to input a number and check if it is positive.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "The number is positive." << endl;
    }

    return 0;
}
