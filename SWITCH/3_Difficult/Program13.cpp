// Program 33
// Control Structure: SWITCH
// Difficulty: Difficult
// Question: Compute airline ticket fare based on destination and travel class choices.

#include <iostream>
using namespace std;

int main() {
    int dest, cls;
    cout << "Destination (1: Karachi, 2: Islamabad): ";
    cin >> dest;
    cout << "Class (1: Economy, 2: Business): ";
    cin >> cls;

    switch (dest) {
        case 1: // Karachi
            switch (cls) {
                case 1: cout << "Ticket Fare: Rs. 25,000" << endl; break;
                case 2: cout << "Ticket Fare: Rs. 45,000" << endl; break;
                default: cout << "Invalid Class Choice!" << endl;
            }
            break;
        case 2: // Islamabad
            switch (cls) {
                case 1: cout << "Ticket Fare: Rs. 18,000" << endl; break;
                case 2: cout << "Ticket Fare: Rs. 32,000" << endl; break;
                default: cout << "Invalid Class Choice!" << endl;
            }
            break;
        default:
            cout << "Invalid Destination!" << endl;
    }

    return 0;
}
