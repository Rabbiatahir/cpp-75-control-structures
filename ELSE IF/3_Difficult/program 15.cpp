// Program Number: 15
// Control Structure: Else-If 
// Difficulty: Difficult
//
/* Question: Write a C++ program that calculates an employee's annual bonus and promotion eligibility based on their performance rating (1-5), 
years of service, and base salary using a comprehensive else-if ladder. Multiple compound criteria determine the bonus percentage and grade upgrade.
 Invalid inputs display an error message.*/

#include <iostream>
using namespace std;

int main() {
    int rating, tenure;
    double salary, bonus = 0;

    cout << "Enter performance rating (1 to 5): ";
    cin >> rating;
    cout << "Enter years of service: ";
    cin >> tenure;
    cout << "Enter base salary in PKR: ";
    cin >> salary;

    if (rating >= 1 && rating <= 5 && tenure >= 0 && salary > 0) {
        if (rating == 5 && tenure >= 5) {
            bonus = salary * 0.30;
            cout << "Appraisal Result: Outstanding! Eligible for Grade Promotion & 30% Bonus." << endl;
        }
        else if (rating == 5 && tenure < 5) {
            bonus = salary * 0.25;
            cout << "Appraisal Result: Excellent! Eligible for 25% Bonus." << endl;
        }
        else if (rating == 4 && tenure >= 3) {
            bonus = salary * 0.20;
            cout << "Appraisal Result: Very Good! Eligible for Grade Promotion & 20% Bonus." << endl;
        }
        else if (rating == 4 && tenure < 3) {
            bonus = salary * 0.15;
            cout << "Appraisal Result: Good! Eligible for 15% Bonus." << endl;
        }
        else if (rating == 3 && tenure >= 2) {
            bonus = salary * 0.10;
            cout << "Appraisal Result: Satisfactory. Eligible for 10% Bonus." << endl;
        }
        else if (rating == 2) {
            bonus = salary * 0.05;
            cout << "Appraisal Result: Needs Improvement. Eligible for 5% Standard Bonus." << endl;
        }
        else {
            bonus = 0;
            cout << "Appraisal Result: Unsatisfactory Performance. No Bonus Awarded." << endl;
        }

        cout << "Calculated Bonus Amount: " << bonus << " PKR" << endl;
    } 
    else {
        cout << "Error: Invalid rating, tenure, or salary entered." << endl;
    }

    return 0;
}
