// Program 12
// Control Structure: IF
// Difficulty: Difficult
// Question: Write a C++ program to check if an applicant qualifies for a loan based on salary and credit score.

#include <iostream>
using namespace std;

int main() {
    int salary;
    int creditscore;
    cout<<"Enter your salary: ";
    cin>>salary;
    cout<<"Enter your Credit score: ";
    cin>>creditscore;
    if(salary >= 50000 && creditscore >= 700){
    	cout<<"Loan Approved: Applicant meets income and credit requirements.";
	}
    

    return 0;
}
