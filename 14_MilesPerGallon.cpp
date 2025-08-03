// C++ Practice. Basics to advanced topics
/*
	Miles per gallon program

	This program will calculate the miles per gallon a car gets.
	The car can hold 15 gallons, and can travel 375 miles.
*/

#include <iostream>
using namespace std;

int main() {
	double gallons = 15.0, miles = 375, MPG;

	MPG = miles / gallons;

	cout << "The amount of miles per one gallon this car can drive is: "
		 << MPG << " miles per gallon.";

	return 0;
}