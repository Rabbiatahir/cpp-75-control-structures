// Program 17
// Control Structure: IF ELSE
// Difficulty: Easy
// Question: Check if a person is eligible to vote (Age >= 18).

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote yet." << endl;
    }

    return 0;
}
