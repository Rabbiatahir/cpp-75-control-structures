// Program 11
// Control Structure: IF
// Difficulty: Difficult
// Question: Write a C++ program to verify if three given angles form a valid triangle.

#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    int z;
    cout<<"Enter the angles of triangle:";
    cin>>x>>y>>z;
    if(x+y+z==180 && x>0 && y>0 && z>0){
    	cout<<"Valid Triangle";
	}

    return 0;
}
