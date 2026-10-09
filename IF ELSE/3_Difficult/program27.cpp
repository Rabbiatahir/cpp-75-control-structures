// Program 27
// Control Structure: IF ELSE
// Difficulty: Difficult
// Question: Check if three lengths can form a valid triangle using side inequality rule.

#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;
    cout << "Enter lengths of 3 sides: ";
    cin >> side1 >> side2 >> side3;

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        cout << "A valid triangle CAN be formed with these side lengths." << endl;
    } else {
        cout << "These side lengths CANNOT form a valid triangle." << endl;
    }

    return 0;
}
