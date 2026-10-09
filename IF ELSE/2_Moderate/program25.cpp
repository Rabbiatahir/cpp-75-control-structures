// Program 25
// Control Structure: IF ELSE
// Difficulty: Moderate
// Question: Apply free shipping if order total exceeds Rs. 2000.

#include <iostream>
using namespace std;

int main() {
    double orderAmount;
    cout << "Enter total order amount (Rs.): ";
    cin >> orderAmount;

    if (orderAmount >= 2000) {
        cout << "Shipping Fee: FREE!" << endl;
        cout << "Final Bill: Rs. " << orderAmount << endl;
    } else {
        cout << "Shipping Fee: Rs. 200" << endl;
        cout << "Final Bill: Rs. " << (orderAmount + 200) << endl;
    }

    return 0;
}
