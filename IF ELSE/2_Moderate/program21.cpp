// Program 21
// Control Structure: IF ELSE
// Difficulty: Moderate
// Question: Calculate profit or loss amount based on cost price and selling price.

#include <iostream>
using namespace std;
int main() {
    double costPrice, sellingPrice;
    cout << "Enter Cost Price: ";
    cin >> costPrice;
    cout << "Enter Selling Price: ";
    cin >> sellingPrice;

    if (sellingPrice >= costPrice) {
        cout << "Profit: Rs. " << (sellingPrice - costPrice) << endl;
    } else {
        cout << "Loss: Rs. " << (costPrice - sellingPrice) << endl;
    }

    return 0;
}
