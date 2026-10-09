// Program 02
// Control Structure: IF
// Difficulty: Easy
// Question: Write a C++ program to check if a person is eligible to vote (age 18 or older).

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    }

    return 0;
}
