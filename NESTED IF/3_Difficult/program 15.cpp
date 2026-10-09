// Program Number: 15
// Control Structure: Nested If
// Difficulty: Difficult
// Question:

/*Write a C++ program that takes a customer's monthly salary, credit score, and requested loan amount as input to determine loan eligibility and interest rate. 
 Customers must have a valid credit score (300-850) and positive salary. Loans are approved based on credit score tiers and salary limits. 
 Invalid records or low credit scores display appropriate rejection messages.*/

#include <iostream>
using namespace std;

int main() {
    double salary;
    int creditScore;
    double loanAmount;

    cout << "Enter Monthly Salary: ";
    cin >> salary;
    cout << "Enter Credit Score (300-850): ";
    cin >> creditScore;
    cout << "Enter Requested Loan Amount: ";
    cin >> loanAmount;

    if (salary > 0 && creditScore >= 300 && creditScore <= 850 && loanAmount > 0) {
        
        if (creditScore >= 700) {
            
            // Tier 1: Excellent Credit
            if (loanAmount <= salary * 10) {
                double interestRate = 10.5;
                cout << "Loan Status: Approved (Tier 1)" << endl;
                cout << "Interest Rate: " << interestRate << "%" << endl;
            } 
            else {
                cout << "Loan Status: Rejected - Requested amount exceeds maximum limit for Tier 1." << endl;
            }

        } 
        else if (creditScore >= 600) {
            
            if (loanAmount <= salary * 5) {
                double interestRate = 14.0;
                cout << "Loan Status: Approved (Tier 2)" << endl;
                cout << "Interest Rate: " << interestRate << "%" << endl;
            } 
            else {
                cout << "Loan Status: Rejected - Requested amount exceeds maximum limit for Tier 2." << endl;
            }

        } 
        else {
            cout << "Loan Status: Ineligible due to Low Credit Score." << endl;
        }

    } 
    else {
        cout << "Error: Invalid Input Records." << endl;
    }

    return 0;
}
