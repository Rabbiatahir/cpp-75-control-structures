// Program 28
// Control Structure: IF ELSE
// Difficulty: Difficult
// Question: Apply flat 10% tax rate if salary exceeds tax exemption limit of Rs. 600,000.

#include <iostream>
using namespace std;

int main() {
    double annualSalary;
    cout << "Enter annual salary (Rs.): ";
    cin >> annualSalary;

    if (annualSalary > 600000) {
        double tax = (annualSalary - 600000) * 0.10;
        cout << "Tax Deduction: Rs. " << tax << endl;
        cout << "Net Annual Income: Rs. " << (annualSalary - tax) << endl;
    } else {
        cout << "Income is within tax-free slab. Total Tax: Rs. 0" << endl;
    }

    return 0;
}
