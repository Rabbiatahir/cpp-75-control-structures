// Program 14
// Control Structure: IF
// Difficulty: Difficult
// Question: Write a C++ program to calculate overtime bonus if working hours exceed 40 hours per week.

#include <iostream>
using namespace std;

int main() {
    float hoursWorked, hourlyRate;
    cout << "Enter total hours worked this week: ";
    cin >> hoursWorked;
    cout << "Enter hourly pay rate: ";
    cin >> hourlyRate;

    float totalPay = hoursWorked * hourlyRate;

    if (hoursWorked > 40) {
        float overtimeHours = hoursWorked - 40;
        float overtimeBonus = overtimeHours * (hourlyRate * 0.5);
        totalPay += overtimeBonus;
        cout << "Overtime Bonus Applied! Extra Pay: " << overtimeBonus << endl;
    }

    cout << "Total Salary: " << totalPay << endl;

    return 0;
}
