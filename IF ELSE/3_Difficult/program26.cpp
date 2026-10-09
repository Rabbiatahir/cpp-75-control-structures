// Program 26
// Control Structure: IF ELSE
// Difficulty: Difficult
// Question: Apply low-balance maintenance surcharge if balance is under minimum threshold.

#include <iostream>
using namespace std;

int main() {
    double balance;
    const double MIN_BALANCE = 5000.0;
    const double SURCHARGE = 250.0;

    cout << "Enter account balance (Rs.): ";
    cin >> balance;

    if (balance < MIN_BALANCE) {
        balance -= SURCHARGE;
        cout << "Low balance fee of Rs. " << SURCHARGE << " applied." << endl;
        cout << "New Account Balance: Rs. " << balance << endl;
    } else {
        cout << "Account balance meets minimum threshold. No charges applied." << endl;
    }

    return 0;
}
