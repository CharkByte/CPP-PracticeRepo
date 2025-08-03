// C++ Practice. Basics to advanced topics
/*
	Ocean Levels Program

	This program will calculate ocean level if it rises 1.5 millimeters per year.
	It will display the ocean level for several different years.
*/

#include <iostream>
using namespace std;

int main() {

	float OceanLvl5, OceanLvl7, OceanLvl10, lvlRise = 1.5;

	// Ocean level after 5 years
	OceanLvl5 = lvlRise * 5; 

	// Ocean level after 7 years
	OceanLvl7 = lvlRise * 7;

	// Ocean level after 10 years
	OceanLvl10 = lvlRise * 10;
	
	cout << "The ocean level rise after \n";
	cout << "5 years is: " << OceanLvl5 << " millimeters";
	cout << "\n7 years is: " << OceanLvl7 << " millimeters";
	cout << "\n10 years is: " << OceanLvl10 << " millimeters";

	return 0;
}