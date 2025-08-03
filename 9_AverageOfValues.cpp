// C++ Practice. Basics to advanced topics
/*
	Average of Values Program

	This program will average a series of values, add them up and 
	divide the sum by the number of values. Each of the five values
	will be stored in different variables: 28, 32, 37, 24, and 33.
*/

#include <iostream>
using namespace std;

int main() {
	double val1 = 28, val2 =32, val3 = 37, val4 = 24, val5 =33, 
		amount = 5,
		sum, average;

	sum = val1 + val2 + val3 + val4 + val5;
	average = sum / amount;

	cout << "The average of all values is: " << average; 
	return 0;
}