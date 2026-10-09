// Program Number: 7
// Control Structure: Else-If 
// Difficulty: Moderate
/* Question: Write a C++ program that takes three side lengths of a triangle as input, validates if they form a valid triangle using 
the triangle inequality theorem, and classifies it as Equilateral, Isosceles, or Scalene using an else-if ladder. Non-positive side lengths or 
invalid triangles display an error message.*/

#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter length of first side: ";
    cin >> a;
    cout << "Enter length of second side: ";
    cin >> b;
    cout << "Enter length of third side: ";
    cin >> c;

    if (a > 0 && b > 0 && c > 0) {
        
        if ((a + b > c) && (b + c > a) && (a + c > b)) {
            
            if (a == b && b == c) {
                cout << "Triangle Type: Equilateral Triangle" << endl;
            }
            else if (a == b || b == c || a == c) {
                cout << "Triangle Type: Isosceles Triangle" << endl;
            }
            else {
                cout << "Triangle Type: Scalene Triangle" << endl;
            }

        } 
        else {
            cout << "Error: The given side lengths do not form a valid triangle." << endl;
        }

    } 
    else {
        cout << "Error: Side lengths must be positive numbers." << endl;
    }

    return 0;
}
