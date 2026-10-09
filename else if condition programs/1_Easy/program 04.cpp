// Program Number: 4
// Control Structure: Else-If 
// Difficulty: Easy
/*Question: A C++ program that takes two numbers and an arithmetic operator (+, -, *, /) as input to perform the corresponding calculation 
using an else-if ladder. Division by zero and invalid operators display an error message.*/

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    if (op == '+') {
        cout << "Result: " << num1 + num2 << endl;
    }
    else if (op == '-') {
        cout << "Result: " << num1 - num2 << endl;
    }
    else if (op == '*') {
        cout << "Result: " << num1 * num2 << endl;
    }
    else if (op == '/') {
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        }
        else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
    else {
        cout << "Error: Invalid operator entered." << endl;
    }

    return 0;
}
