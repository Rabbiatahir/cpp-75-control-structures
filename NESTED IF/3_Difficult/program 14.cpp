// Program Number: 14
// Control Structure: Nested If
// Difficulty: Difficult
//
// Question:
/* Write a C++ program that takes an employee's base salary, performance rating, and overtime hours as input to calculate total bonus and final payout. 
High performers (rating = 4) receive a 20% base bonus plus extra overtime pay, with an additional 10,000 PKR for top ratings (rating = 5). 
Satisfactory performers (rating = 3) receive a 10% base bonus with lower overtime tiers. Invalid payroll inputs display an error message.*/
#include <iostream>
using namespace std;

int main() {
    double baseSalary;
    int rating;
    int overtimeHours;

    cout << "Enter Base Salary: ";
    cin >> baseSalary;
    cout << "Enter Performance Rating (1-5): ";
    cin >> rating;
    cout << "Enter Overtime Hours: ";
    cin >> overtimeHours;

    if (baseSalary > 0 && rating >= 1 && rating <= 5 && overtimeHours >= 0) {
        
        double bonus = 0;
      
        if (rating >= 4) {
            
            bonus = baseSalary * 0.20;

            if (overtimeHours > 20) {
                bonus += 15000; 
            } 
            else if (overtimeHours > 0) {
                bonus += 7500;
            }

            if (rating == 5) {
                bonus += 10000;
            }

            cout << "Performance Level: Outstanding" << endl;
        } 
        else if (rating == 3) {
           
            bonus = baseSalary * 0.10;

            if (overtimeHours > 10) {
                bonus += 5000;
            }

            cout << "Performance Level: Satisfactory" << endl;
        } 
        else {
            cout << "Performance Level: Needs Improvement (No Bonus Awarded)" << endl;
        }

        cout << "Calculated Bonus: " << bonus << endl;
        cout << "Total Final Payout: " << baseSalary + bonus << endl;

    } 
    else {
        cout << "Error: Invalid Payroll Inputs" << endl;
    }

    return 0;
}
