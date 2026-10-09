// Program Number: 1
// Control Structure: else if
// Difficulty: Difficult
//
// Question:
// Write a C++ program that takes a student's numerical score (0-100) as input and determines the corresponding letter grade using an else-if ladder. Scores >= 85 earn an 'A', >= 70 earn a 'B', >= 50 earn a 'C', and below 50 result in a 'F'. Invalid scores display an error message.

#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter student score (0-100): ";
    cin >> score;

    if (score >= 0 && score <= 100) {
        
        if (score >= 85) {
            cout << "Grade: A" << endl;
        }
        else if (score >= 70) {
            cout << "Grade: B" << endl;
        }
        else if (score >= 50) {
            cout << "Grade: C" << endl;
        }
        else {
            cout << "Grade: F (Fail)" << endl;
        }

    } 
    else {
        cout << "Error: Invalid score entered." << endl;
    }

    return 0;
}
