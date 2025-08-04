// C++ Practice. Basics to advanced topics
/*
	Distance per gallon program

	This program will calculate the total distance a car can drive on a gallon.
	The car can hold 20 gallons, and can travel 28.9 miles per gallon.
*/

#include <iostream>
using namespace std;

int main() {
	double gallons = 20.0, miles, MPG = 28.9;

	miles = MPG * gallons;

	cout << "The amount of miles per one gallon this car can drive is: "
		<< miles << " miles.";

	return 0;

}
