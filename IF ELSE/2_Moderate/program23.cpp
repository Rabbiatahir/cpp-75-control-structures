// Program 23
// Control Structure: IF ELSE
// Difficulty: Moderate
// Question: Verify user login password against a fixed correct password.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    const string correctPass = "cpp12345";

    cout << "Enter password: ";
    cin >> password;

    if (password == correctPass) {
        cout << "Access Granted! Welcome to the system." << endl;
    } else {
        cout << "Access Denied! Incorrect Password." << endl;
    }

    return 0;
}
