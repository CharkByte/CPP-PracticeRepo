// C++ Practice. Basics to advanced topics
/*
	Land Calculation program

	This program will calculate the number of acres in a tract of land, 
	with 391,876 square feet.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double acre = 43560.0, land = 391876.0, numOfAcres;

	numOfAcres = land / acre; 

	cout << fixed << setprecision(2);
	cout << "The number of acres in 391,876 square feet is: ";
	cout << numOfAcres << " acres of land." << endl;

	return 0;
}