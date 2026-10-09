// Program Number: 5
// Control Structure: Else-If 
// Difficulty: Easy
/* Question: Write a C++ program that takes a single alphabetic character as input and determines whether it is a vowel or a consonant using 
an else-if ladder. Non-alphabetic inputs display an error message.*/

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter an alphabetic character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'A') {
        cout << "Character is a Vowel." << endl;
    }
    else if (ch == 'e' || ch == 'E') {
        cout << "Character is a Vowel." << endl;
    }
    else if (ch == 'i' || ch == 'I') {
        cout << "Character is a Vowel." << endl;
    }
    else if (ch == 'o' || ch == 'O') {
        cout << "Character is a Vowel." << endl;
    }
    else if (ch == 'u' || ch == 'U') {
        cout << "Character is a Vowel." << endl;
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << "Character is a Consonant." << endl;
    }
    else {
        cout << "Error: Invalid input. Please enter an alphabetic character." << endl;
    }

    return 0;
}
