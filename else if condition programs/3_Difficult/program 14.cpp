// Program Number: 14
// Control Structure: Else-If 
// Difficulty: Difficult
/* Question: Write a C++ program that calculates courier shipping charges based on package weight, destination zone, and delivery speed tier
 using a complex else-if ladder. Multiple compound criteria involving weight brackets, distance zones, and service tiers dictate the total shipping 
 cost. Invalid inputs display an error message.*/

#include <iostream>
using namespace std;

int main() {
    double weight, cost = 0;
    int zone, speed;

    cout << "Enter package weight in kg: ";
    cin >> weight;
    cout << "Enter destination zone (1-Local, 2-Regional, 3-International): ";
    cin >> zone;
    cout << "Enter delivery speed (1-Standard, 2-Express, 3-Overnight): ";
    cin >> speed;

    if (weight > 0 && zone >= 1 && zone <= 3 && speed >= 1 && speed <= 3) {
        if (zone == 1 && speed == 1 && weight <= 5) {
            cost = weight * 200.0;
        }
        else if (zone == 1 && speed == 1 && weight > 5) {
            cost = (5 * 200.0) + ((weight - 5) * 150.0);
        }
        else if (zone == 1 && speed >= 2 && weight <= 5) {
            cost = weight * 350.0;
        }
        else if (zone == 1 && speed >= 2 && weight > 5) {
            cost = (5 * 350.0) + ((weight - 5) * 250.0);
        }
        else if (zone == 2 && speed == 1 && weight <= 5) {
            cost = weight * 500.0;
        }
        else if (zone == 2 && speed == 1 && weight > 5) {
            cost = (5 * 500.0) + ((weight - 5) * 400.0);
        }
        else if (zone == 2 && speed >= 2 && weight <= 5) {
            cost = weight * 800.0;
        }
        else if (zone == 2 && speed >= 2 && weight > 5) {
            cost = (5 * 800.0) + ((weight - 5) * 650.0);
        }
        else if (zone == 3 && weight <= 5) {
            cost = weight * 1500.0 + (speed * 300.0);
        }
        else {
            cost = (5 * 1500.0) + ((weight - 5) * 1200.0) + (speed * 500.0);
        }

        cout << "Total Shipping Charges: " << cost << " PKR" << endl;
    } 
    else {
        cout << "Error: Invalid weight, destination zone, or speed tier entered." << endl;
    }

    return 0;
}
