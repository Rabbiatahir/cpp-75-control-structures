// Program Number: 6
// Control Structure: Switch Statement
// Difficulty: Moderate
//
/* Question: Write a C++ program that calculates the final payable amount for an e-commerce shopping cart using a switch statement. The user 
selects a membership tier (1. Gold, 2. Silver, 3. Bronze, 4. Regular), and the program applies the respective discount percentage to the total 
cart amount. Invalid tiers display an error message.*/

#include <iostream>
using namespace std;

int main() {
    int tier;
    double totalAmount, discount = 0, finalAmount = 0;

    cout << "=== E-Commerce Shopping Cart ===" << endl;
    cout << "Enter total cart amount (PKR): ";
    cin >> totalAmount;

    if (totalAmount > 0) {
        cout << "\nSelect Membership Tier:" << endl;
        cout << "1. Gold Member (20% Discount)" << endl;
        cout << "2. Silver Member (15% Discount)" << endl;
        cout << "3. Bronze Member (10% Discount)" << endl;
        cout << "4. Regular Customer (No Discount)" << endl;
        cout << "Enter tier choice (1-4): ";
        cin >> tier;

        switch (tier) {
            case 1:
                discount = totalAmount * 0.20;
                break;
            case 2:
                discount = totalAmount * 0.15;
                break;
            case 3:
                discount = totalAmount * 0.10;
                break;
            case 4:
                discount = 0.0;
                break;
            default:
                cout << "Error: Invalid membership tier selected." << endl;
                return 0;
        }

        finalAmount = totalAmount - discount;
        cout << "\n--- Bill Summary ---" << endl;
        cout << "Original Amount: " << totalAmount << " PKR" << endl;
        cout << "Discount Applied: " << discount << " PKR" << endl;
        cout << "Final Payable Amount: " << finalAmount << " PKR" << endl;
    } else {
        cout << "Error: Please enter a valid positive cart amount." << endl;
    }

    return 0;
}
