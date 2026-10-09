// Program Number: 1
// Control Structure: else if
// Difficulty: Difficult
//
// Question:
/* Write a C++ program that takes a single character as input and determines its category using an else-if ladder. The program checks if 
the character is an uppercase letter, a lowercase letter, a digit, or a special symbol. Invalid inputs or single characters 
are handled appropriately.*/

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Category: Uppercase Letter" << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "Category: Lowercase Letter" << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "Category: Digit" << endl;
    }
    else {
        cout << "Category: Special Symbol" << endl;
    }

    return 0;
}
