// C++ Practice. Basics to advanced topics
/*
	 Weight converter program

	 This program will ask the user to enter their weight in pounds and convert that amount 
	 to kilograms.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double pounds, kilograms;
	
	cout << "This program will ask for your weight in lbs and convert it to kg" << endl;
	cout << "Please enter your weight (lbs):";
	cin >> pounds;

	kilograms = pounds / 2.2;

	cout << fixed << setprecision(2);
	cout << "Your weight is " << kilograms << " kilograms";

	return 0;
}
