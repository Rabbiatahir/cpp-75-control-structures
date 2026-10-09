// Program 35
// Control Structure: SWITCH
// Difficulty: Difficult
// Question: Multi-mode switching system for Length and Weight conversion.

#include <iostream>
using namespace std;

int main() {
    int category, option;
    double value;

    cout << "=== Universal Unit Switching Hub ===" << endl;
    cout << "1. Length (Meters)\n2. Weight (Kilograms)\nSelect Category: ";
    cin >> category;

    switch (category) {
        case 1:
            cout << "Enter value in Meters: "; cin >> value;
            cout << "1. Convert to Kilometers\n2. Convert to Centimeters\nChoice: "; cin >> option;
            switch (option) {
                case 1: cout << "Result: " << value / 1000.0 << " km" << endl; break;
                case 2: cout << "Result: " << value * 100.0 << " cm" << endl; break;
                default: cout << "Invalid Sub-option!" << endl;
            }
            break;
        case 2:
            cout << "Enter value in Kilograms: "; cin >> value;
            cout << "1. Convert to Grams\n2. Convert to Pounds\nChoice: "; cin >> option;
            switch (option) {
                case 1: cout << "Result: " << value * 1000.0 << " g" << endl; break;
                case 2: cout << "Result: " << value * 2.20462 << " lbs" << endl; break;
                default: cout << "Invalid Sub-option!" << endl;
            }
            break;
        default:
            cout << "Invalid Category Selected!" << endl;
    }

    return 0;
}
