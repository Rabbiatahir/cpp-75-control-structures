// Program Number: 7
// Control Structure: Switch Statement
// Difficulty: Moderate
//
/* Question: Write a C++ program that implements a menu-driven restaurant food ordering system using a switch statement. The user selects a 
category (1. Fast Food, 2. Traditional Desi, 3. Beverages), and then selects a specific item from a sub-menu to view its price and confirm the 
order. Invalid category or item selections display an error message.*/

#include <iostream>
using namespace std;

int main() {
    int category, item;

    cout << "=== Restaurant Menu ===" << endl;
    cout << "1. Fast Food" << endl;
    cout << "2. Traditional Desi" << endl;
    cout << "3. Beverages" << endl;
    cout << "Enter category number (1-3): ";
    cin >> category;

    switch (category) {
        case 1:
            cout << "\n-- Fast Food Menu --" << endl;
            cout << "1. Zinger Burger (450 PKR)" << endl;
            cout << "2. Large Pizza (1200 PKR)" << endl;
            cout << "3. French Fries (200 PKR)" << endl;
            cout << "Enter item choice (1-3): ";
            cin >> item;
            switch (item) {
                case 1:
                    cout << "Order Confirmed: Zinger Burger - 450 PKR" << endl;
                    break;
                case 2:
                    cout << "Order Confirmed: Large Pizza - 1200 PKR" << endl;
                    break;
                case 3:
                    cout << "Order Confirmed: French Fries - 200 PKR" << endl;
                    break;
                default:
                    cout << "Error: Invalid fast food item choice." << endl;
            }
            break;
        case 2:
            cout << "\n-- Traditional Desi Menu --" << endl;
            cout << "1. Chicken Biryani (350 PKR)" << endl;
            cout << "2. Chicken Karahi (Half) (900 PKR)" << endl;
            cout << "3. Seekh Kebab Plate (400 PKR)" << endl;
            cout << "Enter item choice (1-3): ";
            cin >> item;
            switch (item) {
                case 1:
                    cout << "Order Confirmed: Chicken Biryani - 350 PKR" << endl;
                    break;
                case 2:
                    cout << "Order Confirmed: Chicken Karahi (Half) - 900 PKR" << endl;
                    break;
                case 3:
                    cout << "Order Confirmed: Seekh Kebab Plate - 400 PKR" << endl;
                    break;
                default:
                    cout << "Error: Invalid desi item choice." << endl;
            }
            break;
        case 3:
            cout << "\n-- Beverages Menu --" << endl;
            cout << "1. Fresh Lime (120 PKR)" << endl;
            cout << "2. Mango Shake (250 PKR)" << endl;
            cout << "3. Cold Drink (100 PKR)" << endl;
            cout << "Enter item choice (1-3): ";
            cin >> item;
            switch (item) {
                case 1:
                    cout << "Order Confirmed: Fresh Lime - 120 PKR" << endl;
                    break;
                case 2:
                    cout << "Order Confirmed: Mango Shake - 250 PKR" << endl;
                    break;
                case 3:
                    cout << "Order Confirmed: Cold Drink - 100 PKR" << endl;
                    break;
                default:
                    cout << "Error: Invalid beverage item choice." << endl;
            }
            break;
        default:
            cout << "Error: Invalid main category selected." << endl;
    }

    return 0;
}
