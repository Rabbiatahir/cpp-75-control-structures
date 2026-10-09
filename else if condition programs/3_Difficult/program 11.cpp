// Program Number: 11
// Control Structure: Else-If 
// Difficulty: Difficult
/* Question: Write a C++ program that takes an employee's annual salary as input and calculates their income tax using an intricate else-if ladder
 based on multi-tiered tax slabs. The slabs are: up to 400,000 (0% tax), 400,001 to 800,000 (5% tax on amount exceeding 400,000), 800,001 to
  1,500,000 (20,000 + 10% on amount exceeding 800,000), and above 1,500,000 (90,000 + 20% on amount exceeding 1,500,000). Negative salaries display 
  an error message.*/

#include <iostream>
using namespace std;

int main() {
    double salary, tax = 0;

    cout << "Enter annual salary: ";
    cin >> salary;

    if (salary >= 0) {
        if (salary <= 400000) {
            tax = 0;
        }
        else if (salary <= 800000) {
            tax = (salary - 400000) * 0.05;
        }
        else if (salary <= 1500000) {
            tax = 20000 + ((salary - 800000) * 0.10);
        }
        else {
            tax = 90000 + ((salary - 1500000) * 0.20);
        }

        cout << "Total Income Tax: " << tax << " PKR" << endl;
    } 
    else {
        cout << "Error: Salary cannot be negative." << endl;
    }

    return 0;
}
