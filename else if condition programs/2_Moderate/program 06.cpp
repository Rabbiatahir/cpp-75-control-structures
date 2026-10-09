// Program Number: 6
// Control Structure: Else-If 
// Difficulty: Moderate
/* Question: Write a C++ program that takes electricity units consumed as input and calculates the total electricity bill using an else-if 
ladder with tiered pricing. Units up to 100 cost 10 per unit, units from 101 to 300 cost 15 per unit, and units above 300 cost 20 per unit. 
Negative unit values display an error message.*/

#include <iostream>
using namespace std;

int main() {
    int units;
    double bill = 0;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units >= 0) {
        
        if (units <= 100) {
            bill = units * 10.0;
        }
        else if (units <= 300) {
            bill = (100 * 10.0) + ((units - 100) * 15.0);
        }
        else {
            bill = (100 * 10.0) + (200 * 15.0) + ((units - 300) * 20.0);
        }

        cout << "Total Electricity Bill: " << bill << " PKR" << endl;

    } 
    else {
        cout << "Error: Invalid unit consumption entered." << endl;
    }

    return 0;
}
