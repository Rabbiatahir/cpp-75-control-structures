// Program Number: 10
// Control Structure: Switch Statement
// Difficulty: Moderate
//
/* Question: Write a C++ program that acts as a menu-driven currency converter using a switch statement. The user inputs an amount in Pakistani 
Rupees (PKR) and selects a target currency (1. US Dollar, 2. Euro, 3. British Pound, 4. Saudi Riyal). The program calculates and displays the 
converted amount using predefined exchange rates. Invalid choices display an error message.*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    double pkr, convertedAmount = 0;

    cout << "=== Currency Converter Portal ===" << endl;
    cout << "Enter amount in PKR: ";
    cin >> pkr;

    if (pkr > 0) {
        cout << "\nSelect Target Currency:" << endl;
        cout << "1. US Dollar (USD)" << endl;
        cout << "2. Euro (EUR)" << endl;
        cout << "3. British Pound (GBP)" << endl;
        cout << "4. Saudi Riyal (SAR)" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                convertedAmount = pkr / 280.0;
                cout << "Converted Amount: " << convertedAmount << " USD" << endl;
                break;
            case 2:
                convertedAmount = pkr / 305.0;
                cout << "Converted Amount: " << convertedAmount << " EUR" << endl;
                break;
            case 3:
                convertedAmount = pkr / 365.0;
                cout << "Converted Amount: " << convertedAmount << " GBP" << endl;
                break;
            case 4:
                convertedAmount = pkr / 75.0;
                cout << "Converted Amount: " << convertedAmount << " SAR" << endl;
                break;
            default:
                cout << "Error: Invalid currency choice selected." << endl;
        }
    } else {
        cout << "Error: Please enter a valid positive amount in PKR." << endl;
    }

    return 0;
}
