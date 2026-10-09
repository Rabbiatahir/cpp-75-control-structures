// Program 24
// Control Structure: IF ELSE
// Difficulty: Moderate
// Question: Calculate total wage including 1.5x overtime pay for hours > 40.

#include <iostream>
using namespace std;

int main() {
    double hours, rate;
    cout << "Enter hours worked this week: ";
    cin >> hours;
    cout << "Enter hourly pay rate (Rs.): ";
    cin >> rate;

    double grossPay = 0;

    if (hours > 40) {
        double overtimeHours = hours - 40;
        grossPay = (40 * rate) + (overtimeHours * rate * 1.5);
    } else {
        grossPay = hours * rate;
    }

    cout << "Total Gross Pay: Rs. " << grossPay << endl;
    return 0;
}

