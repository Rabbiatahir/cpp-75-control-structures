// Program Number: 8
// Control Structure: Switch Statement
// Difficulty: Moderate
//
/* Question: Write a C++ program that takes a letter grade (A, B, C, D, F) as input and displays the corresponding GPA points and descriptive
 remark using a switch statement, handling both uppercase and lowercase letters. Invalid letter grades display an error message.*/

#include <iostream>
using namespace std;

int main() {
    char grade;

    cout << "Enter your letter grade (A, B, C, D, F): ";
    cin >> grade;

    switch (grade) {
        case 'A':
        case 'a':
            cout << "GPA: 4.0 | Remark: Excellent / Outstanding Performance" << endl;
            break;
        case 'B':
        case 'b':
            cout << "GPA: 3.0 | Remark: Good Performance" << endl;
            break;
        case 'C':
        case 'c':
            cout << "GPA: 2.0 | Remark: Satisfactory Performance" << endl;
            break;
        case 'D':
        case 'd':
            cout << "GPA: 1.0 | Remark: Sufficient / Passing Performance" << endl;
            break;
        case 'F':
        case 'f':
            cout << "GPA: 0.0 | Remark: Fail / Unsatisfactory" << endl;
            break;
        default:
            cout << "Error: Invalid letter grade entered. Please use A, B, C, D, or F." << endl;
    }

    return 0;
}
