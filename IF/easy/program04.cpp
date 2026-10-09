// Program 04
// Control Structure: IF
// Difficulty: Easy
// Question: Write a C++ program to check if a given integer is even.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    }

    return 0;
}
