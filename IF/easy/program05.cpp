// Program 05
// Control Structure: IF
// Difficulty: Easy
// Question: Write a C++ program to check if the temperature is below 0 degrees Celsius.

#include <iostream>
using namespace std;

int main() {
    float temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;

    if (temp < 0) {
        cout << "Warning: Freezing temperature!" << endl;
    }

    return 0;
}2
