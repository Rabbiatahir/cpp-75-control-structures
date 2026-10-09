// Program Number: 13
// Control Structure: Nested If
// Difficulty: Difficult
//
// Question:
/*Write a C++ program that takes a student's GPA and attendance as input and determines scholarship eligibility. 
Students with at least 85% attendance may receive a full scholarship (GPA = 3.8) or half scholarship (GPA = 3.5). 
A GPA of 4.0 earns an additional 10,000 PKR bonus. Invalid records or low eligibility must display appropriate messages.*/

#include <iostream>
using namespace std;

int main () {
    double gpa;
    double attendance;

    cout << "Enter GPA (0.0 - 4.0): ";
    cin >> gpa;
    cout << "Enter Attendance Percentage (0 - 100): ";
    cin >> attendance;

    if (gpa >= 0.0 && gpa <= 4.0 && attendance >= 0.0 && attendance <= 100.0) {
      
        if (attendance >= 85.0) {
            
            if (gpa >= 3.8) {
                int stipend = 50000;
                cout << "Award: Full Scholarship" << endl;

                if (gpa == 4.0) {
                    stipend += 10000;
                    cout << "Merit Bonus Applied (+10000 PKR)" << endl;
                }

                cout << "Total Stipend: " << stipend << " PKR" << endl;
            }
            else if (gpa >= 3.5) {
                int stipend = 25000;
                cout << "Award: Half Scholarship" << endl;
                cout << "Total Stipend: " << stipend << " PKR" << endl;
            }
            else {
                cout << "Status: Eligible for Admission, No Scholarship" << endl;
            }

        }
        else {
            cout << "Status: Ineligible for Scholarship due to Low Attendance" << endl;
        }

    }
    else {
        cout << "Error: Invalid Academic Records" << endl;
    }

    return 0;
}
