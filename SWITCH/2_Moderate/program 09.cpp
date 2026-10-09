// Program Number: 9
// Control Structure: Switch Statement
// Difficulty: Moderate
//
/* Question: Write a C++ program that implements a menu-driven mobile network subscription portal using a switch statement. The user chooses 
a package type (1. Daily, 2. Weekly, 3. Monthly), and then selects a specific bundle to view its volume, price, and confirm subscription. 
Invalid choices display an error message.*/

#include <iostream>
using namespace std;

int main() {
    int duration, bundle;

    cout << "=== Mobile Network Package Portal ===" << endl;
    cout << "1. Daily Packages" << endl;
    cout << "2. Weekly Packages" << endl;
    cout << "3. Monthly Packages" << endl;
    cout << "Enter duration choice (1-3): ";
    cin >> duration;

    switch (duration) {
        case 1:
            cout << "\n-- Daily Packages --" << endl;
            cout << "1. 500 MB Data + 50 SMS (30 PKR)" << endl;
            cout << "2. Unlimited On-Net Calls + 1 GB (50 PKR)" << endl;
            cout << "Enter bundle choice (1-2): ";
            cin >> bundle;
            switch (bundle) {
                case 1:
                    cout << "Success! Subscribed to Daily Data Bundle (30 PKR)." << endl;
                    break;
                case 2:
                    cout << "Success! Subscribed to Daily Hybrid Bundle (50 PKR)." << endl;
                    break;
                default:
                    cout << "Error: Invalid daily bundle choice." << endl;
            }
            break;
        case 2:
            cout << "\n-- Weekly Packages --" << endl;
            cout << "1. 5 GB Data + 500 SMS (250 PKR)" << endl;
            cout << "2. All-in-One Weekly: 12 GB + Minutes (400 PKR)" << endl;
            cout << "Enter bundle choice (1-2): ";
            cin >> bundle;
            switch (bundle) {
                case 1:
                    cout << "Success! Subscribed to Weekly Data Bundle (250 PKR)." << endl;
                    break;
                case 2:
                    cout << "Success! Subscribed to Weekly All-in-One Bundle (400 PKR)." << endl;
                    break;
                default:
                    cout << "Error: Invalid weekly bundle choice." << endl;
            }
            break;
        case 3:
            cout << "\n-- Monthly Packages --" << endl;
            cout << "1. 30 GB Data Mega Offer (1200 PKR)" << endl;
            cout << "2. Heavy User Monthly: 75 GB + All Network Mins (2200 PKR)" << endl;
            cout << "Enter bundle choice (1-2): ";
            cin >> bundle;
            switch (bundle) {
                case 1:
                    cout << "Success! Subscribed to Monthly Mega Data Offer (1200 PKR)." << endl;
                    break;
                case 2:
                    cout << "Success! Subscribed to Heavy User Monthly Offer (2200 PKR)." << endl;
                    break;
                default:
                    cout << "Error: Invalid monthly bundle choice." << endl;
            }
            break;
        default:
            cout << "Error: Invalid duration category selected." << endl;
    }

    return 0;
}
