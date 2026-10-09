// Program 31
// Control Structure: SWITCH
// Difficulty: Difficult
// Question: Handle multi-level telecom bundle selection with nested switch statements.

#include <iostream>
using namespace std;

int main() {
    int service, tier;
    cout << "=== Telecom Services Menu ===" << endl;
    cout << "1. Internet Packages\n2. Voice Call Packages" << endl;
    cout << "Select service (1-2): ";
    cin >> service;

    switch (service) {
        case 1:
            cout << "\n-- Internet Bundles --\n1. Daily 2GB (Rs. 50)\n2. Monthly 50GB (Rs. 1000)\nSelect bundle: ";
            cin >> tier;
            switch (tier) {
                case 1: cout << "Daily 2GB Package Activated!" << endl; break;
                case 2: cout << "Monthly 50GB Package Activated!" << endl; break;
                default: cout << "Invalid Internet Bundle Choice!" << endl;
            }
            break;
        case 2:
            cout << "\n-- Voice Bundles --\n1. Weekly 500 Mins (Rs. 200)\n2. Monthly Unlimited (Rs. 800)\nSelect bundle: ";
            cin >> tier;
            switch (tier) {
                case 1: cout << "Weekly 500 Minutes Package Activated!" << endl; break;
                case 2: cout << "Monthly Unlimited Package Activated!" << endl; break;
                default: cout << "Invalid Voice Bundle Choice!" << endl;
            }
            break;
        default:
            cout << "Invalid Service Selection!" << endl;
    }

    return 0;
}
