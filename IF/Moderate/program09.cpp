// Program 09
// Control Structure: IF
// Difficulty: Moderate
// Question: Write a C++ program to apply a 10% discount if the shopping bill exceeds 5000.

#include <iostream>
using namespace std;

int main() {
    double totalBill;
    cout<<"enter your bill: ";
    cin>>totalBill;
    if(totalBill>5000){
    	double discount=totalBill * 0.10;
    	totalBill-=discount;
    	cout<<"Discount of 10% applied: Your new total bill is: "<<totalBill<<endl;
    	
	}

    return 0;
}
