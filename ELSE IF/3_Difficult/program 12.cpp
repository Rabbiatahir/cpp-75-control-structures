// Program Number: 12
// Control Structure: Else-If 
// Difficulty: Difficult
/*Question: Write a C++ program that takes an applicant's credit score, monthly income, and requested loan amount as input to determine loan
 approval status and interest rate using a comprehensive else-if ladder. Multiple criteria involving score brackets and income thresholds dictate 
 whether the loan is approved at standard, premium, or high rates, or rejected.*/

#include <iostream>
using namespace std;

int main() {
    int creditScore;
    double income, loanAmount;

    cout << "Enter credit score (300-850): ";
    cin >> creditScore;
    cout << "Enter monthly income in PKR: ";
    cin >> income;
    cout << "Enter requested loan amount in PKR: ";
    cin >> loanAmount;

    if (creditScore >= 300 && creditScore <= 850 && income > 0 && loanAmount > 0) {
        if (creditScore >= 750 && income >= 150000 && loanAmount <= (income * 12)) {
            cout << "Loan Status: Approved" << endl;
            cout << "Interest Rate: 12% per annum (Tier 1 - Premium)" << endl;
        }
        else if (creditScore >= 700 && income >= 100000 && loanAmount <= (income * 10)) {
            cout << "Loan Status: Approved" << endl;
            cout << "Interest Rate: 15% per annum (Tier 2 - Standard)" << endl;
        }
        else if (creditScore >= 650 && income >= 60000 && loanAmount <= (income * 6)) {
            cout << "Loan Status: Approved" << endl;
            cout << "Interest Rate: 18% per annum (Tier 3 - Basic)" << endl;
        }
        else if (creditScore >= 600 && income >= 40000 && loanAmount <= (income * 4)) {
            cout << "Loan Status: Approved with Special Review" << endl;
            cout << "Interest Rate: 22% per annum (Tier 4 - High Risk)" << endl;
        }
        else {
            cout << "Loan Status: Rejected" << endl;
            cout << "Reason: Does not meet minimum eligibility criteria for current tiers." << endl;
        }
    } 
    else {
        cout << "Error: Invalid input values entered. Please check ranges." << endl;
    }

    return 0;
}
