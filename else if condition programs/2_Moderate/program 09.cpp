// Program Number: 9
// Control Structure: Else-If 
// Difficulty: Moderate
/* Question: Write a C++ program that takes the coefficients (a, b, c) of a quadratic equation as input and calculates its roots using an 
else-if ladder based on the discriminant value. Real and distinct, real and equal, or complex/imaginary roots are handled appropriately, and zero
 coefficients for 'a' are caught as errors.*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    if (a != 0) {
        double discriminant = (b * b) - (4 * a * c);

        if (discriminant > 0) {
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Roots are real and distinct." << endl;
            cout << "Root 1 = " << root1 << endl;
            cout << "Root 2 = " << root2 << endl;
        }
        else if (discriminant == 0) {
            double root = -b / (2 * a);
            cout << "Roots are real and equal." << endl;
            cout << "Root 1 = Root 2 = " << root << endl;
        }
        else {
            cout << "Roots are complex and imaginary." << endl;
        }
    } 
    else {
        cout << "Error: Coefficient 'a' cannot be zero in a quadratic equation." << endl;
    }

    return 0;
}
