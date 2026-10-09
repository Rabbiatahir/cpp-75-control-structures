// Program 15
// Control Structure: IF
// Difficulty: Difficult
// Question: Write a C++ program to check if a vehicle speed exceeds speed limit and calculate fine.

#include <iostream>
using namespace std;

int main() {
    float speed, limit;
    cout << "Enter vehicle speed (km/h): ";
    cin >> speed;
    cout << "Enter speed limit (km/h): ";
    cin >> limit;

    if (speed > limit) {
        float excess = speed - limit;
        float fine = excess * 200; // 200 per km/h over limit
        cout << "Speed Violation Detected! Excess Speed: " << excess << " km/h" << endl;
        cout << "Calculated Traffic Fine: Rs. " << fine << endl;
    }

    return 0;
}
