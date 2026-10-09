// Program 18
// Control Structure: IF ELSE
// Difficulty: Easy
// Question: Check if a student passed or failed (Passing marks = 50).

#include <iostream>
using namespace std;
int main() {
    float marks;
    cout << "Enter student marks (0-100): ";
    cin >> marks;

    if (marks >= 50.0) {
        cout << "Result: PASSED" << endl;
    } else {
        cout << "Result: FAILED" << endl;
    }

    return 0;
}
