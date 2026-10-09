// Program 03
// Control Structure: IF
// Difficulty: Easy
// Question: Write a C++ program to check if marks are 50 or above to display a passing message.

#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 50) {
        cout << "Congratulations! You passed." << endl;
    }

    return 0;
}
