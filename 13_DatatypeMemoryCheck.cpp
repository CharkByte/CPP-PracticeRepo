// C++ Practice. Basics to advanced topics
/*
	Datatype memory check Program

	This program will check the amount of memory being used in bytes, 
	of different datatypes. 
*/

#include <iostream>
using namespace std;

int main() {
	
	cout << "List of memory sizes for different datatypes: \n";
	cout << "memory byte for a character datatype is: " << sizeof(char) << endl;
	cout << "memory byte for an integer datatype is: " << sizeof(int) << endl;
	cout << "memory byte for a float datatype is: " << sizeof(float) << endl;
	cout << "memory byte for a double datatype is: " << sizeof(double) << endl;

	return 0;
}