// C++ Practice. Basics to advanced topics
/*
	Cylinder volume program

	This program will display the volume of a cylinder, based on 
	the input from a user.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI 3.14159

int main()
{
	double volume, radius, radSqr, height;

	cout << "This program will tell you the volume of \n";
	cout << "a cylinder shaped fuel tank. \n";
	cout << "What is the height of the fuel tank (feet)?:";
	cin >> height;
	cout << "What is the radius of the fuel tank (feet)?:";
	cin >> radius;

	radSqr = pow(radius, 2.0);
	volume = radSqr * height * PI;
	
	cout << "The volume of a fuel tank cylinder is: " << volume << endl;
	
	return 0;
}
