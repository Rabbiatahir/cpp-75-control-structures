// Program Number: 10
// Control Structure: Else-If 
// Difficulty: Moderate
/* Question: Write a C++ program that takes a person's weight (in kg) and height (in meters) as input, calculates their Body Mass Index
 (BMI), and classifies them into Underweight, Normal weight, Overweight, or Obese categories using an else-if ladder. Non-positive inputs display
  an error message.*/

#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;

    cout << "Enter weight in kilograms: ";
    cin >> weight;
    cout << "Enter height in meters: ";
    cin >> height;

    if (weight > 0 && height > 0) {
        bmi = weight / (height * height);
        cout << "Your BMI is: " << bmi << endl;

        if (bmi < 18.5) {
            cout << "Category: Underweight" << endl;
        }
        else if (bmi >= 18.5 && bmi < 25.0) {
            cout << "Category: Normal weight" << endl;
        }
        else if (bmi >= 25.0 && bmi < 30.0) {
            cout << "Category: Overweight" << endl;
        }
        else {
            cout << "Category: Obese" << endl;
        }
    } 
    else {
        cout << "Error: Weight and height must be positive values." << endl;
    }

    return 0;
}
