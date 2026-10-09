// Program 10
// Control Structure: IF
// Difficulty: Moderate
// Question: Write a C++ program to check if student attendance is at least 75% to be eligible for exams.

#include <iostream>
using namespace std;

int main() {
    float x;
    cout<<"Enter your attendance percentage: ";
    cin>>x;
    if(x>=75.0){
    	cout<<"You are eligible for exams.";
	}

    return 0;
}
