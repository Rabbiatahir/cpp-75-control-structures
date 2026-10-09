// Program 07
// Control Structure: IF
// Difficulty: Moderate
// Question: Write a C++ program to check if a number is divisible by both 5 and 10.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if (num % 5==0 && num % 10==0){
    	cout<<"number is divisible by both 5 and 10";
	}

    return 0;
}
