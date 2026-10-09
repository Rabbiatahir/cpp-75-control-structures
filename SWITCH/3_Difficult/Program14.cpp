// Program 34
// Control Structure: SWITCH
// Difficulty: Difficult
// Question: Categorize character input into Digit, Arithmetic Operator, or Letter.

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter any single character: ";
    cin >> ch;

    switch (ch) {
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            cout << "Classification: Numeric Digit (0-9)" << endl;
            break;
        case '+': case '-': case '*': case '/': case '%':
            cout << "Classification: Arithmetic Operator" << endl;
            break;
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                cout << "Classification: Alphabetical Letter" << endl;
            else
                cout << "Classification: Special Symbol" << endl;
    }

    return 0;
}
