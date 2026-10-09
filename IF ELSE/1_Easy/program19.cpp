// Program 19
// Control Structure: IF ELSE
// Difficulty: Easy
// Question: Find the maximum between two numbers.

#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
        cout << a << " is larger than " << b << endl;
    } else {
        cout << b << " is larger than or equal to " << a << endl;
    }

    return 0;
}
