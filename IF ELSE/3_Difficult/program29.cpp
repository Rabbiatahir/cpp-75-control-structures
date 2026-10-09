// Program 29
// Control Structure: IF ELSE
// Difficulty: Difficult
// Question: Charge late payment fee if payment is received after due date.

#include <iostream>
using namespace std;

int main() {
    int daysLate;
    double billAmount;

    cout << "Enter total bill amount (Rs.): ";
    cin >> billAmount;
    cout << "Enter days payment was delayed: ";
    cin >> daysLate;

    if (daysLate > 0) {
        double lateFee = 500.0 + (daysLate * 50.0);
        cout << "Late Fee Charged: Rs. " << lateFee << endl;
        cout << "Total Amount Due: Rs. " << (billAmount + lateFee) << endl;
    } else {
        cout << "Payment made on time! No late fee charged." << endl;
    }

    return 0;
}
