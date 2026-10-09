// Program 06
// Control Structure: IF
// Difficulty: Moderate
// Question: Write a C++ program to check if a customer qualifies for a senior discount (age >= 60).

#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter customer age: ";
    cin >> age;

    if (age >= 60) {
        cout << "Discount Granted 20% Senior Citizen Discount applied!" << endl;
    }

    return 0;
}
