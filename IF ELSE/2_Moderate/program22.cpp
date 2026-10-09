// Program 22
// Control Structure: IF ELSE
// Difficulty: Moderate
// Question: Check if three angles form a valid triangle (Sum = 180 degrees).

#include <iostream>
using namespace std;

int main() {
    float angle1, angle2, angle3;
    cout << "Enter three interior angles of a triangle: ";
    cin >> angle1 >> angle2 >> angle3;

    if ((angle1 + angle2 + angle3 == 180) && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        cout << "The angles form a Valid Triangle." << endl;
    } else {
        cout << "The angles do NOT form a valid triangle." << endl;
    }

    return 0;
}
