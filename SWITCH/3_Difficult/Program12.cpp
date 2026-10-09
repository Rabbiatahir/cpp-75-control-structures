// Program 32
// Control Structure: SWITCH
// Difficulty: Difficult
// Question: Register semester subjects using department and semester code mapping.

#include <iostream>
using namespace std;

int main() {
    int dept, sem;
    cout << "Select Dept (1: CS, 2: SE): ";
    cin >> dept;
    cout << "Select Semester (1 or 2): ";
    cin >> sem;

    switch (dept) {
        case 1: // Computer Science
            switch (sem) {
                case 1: cout << "Registered: Programming Fundamentals, Discrete Math" << endl; break;
                case 2: cout << "Registered: Object Oriented Programming, Data Structures" << endl; break;
                default: cout << "Invalid Semester Selection!" << endl;
            }
            break;
        case 2: // Software Engineering
            switch (sem) {
                case 1: cout << "Registered: Intro to Software Engg, Programming Fundamentals" << endl; break;
                case 2: cout << "Registered: Software Requirements, Object Oriented Programming" << endl; break;
                default: cout << "Invalid Semester Selection!" << endl;
            }
            break;
        default:
            cout << "Invalid Department Selection!" << endl;
    }

    return 0;
}
