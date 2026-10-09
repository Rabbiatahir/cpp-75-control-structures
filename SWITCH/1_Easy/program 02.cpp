// Program Number: 2
// Control Structure: Switch Statement
// Difficulty: Easy
/ Question: Write a C++ program that takes a single character as input and determines whether it is a vowel or a consonant using a switch statement,
 handling both uppercase and lowercase letters. Non-alphabetic inputs display an error message.*/

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter an alphabetic character: ";
    cin >> ch;

    switch (ch) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout << "Character is a Vowel." << endl;
            break;
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                cout << "Character is a Consonant." << endl;
            } 
            else {
                cout << "Error: Invalid input. Please enter an alphabetic character." << endl;
            }
    }

    return 0;
}
