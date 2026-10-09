// Program 30
// Control Structure: IF ELSE
// Difficulty: Difficult
// Question: Apply peak hour billing rate if usage time is between 18:00 and 22:00 hrs.

#include <iostream>
using namespace std;

int main() {
    int hour;
    double units;

    cout << "Enter hour of consumption (0 to 23): ";
    cin >> hour;
    cout << "Enter units consumed: ";
    cin >> units;

    if (hour >= 18 && hour <= 22) {
        double bill = units * 30.0; // Peak rate Rs. 30 per unit
        cout << "Peak Hour Applicable! Total Bill: Rs. " << bill << endl;
    } else {
        double bill = units * 18.0; // Off-peak rate Rs. 18 per unit
        cout << "Off-Peak Hour Standard Rate! Total Bill: Rs. " << bill << endl;
    }

    return 0;
}
