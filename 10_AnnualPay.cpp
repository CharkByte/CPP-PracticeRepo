// C++ Practice. Basics to advanced topics
/*
	Annual Pay Program

	This program will define the pay amount, pay periods and annual pay
	for an employee that gets paid 26 times per year at $2,200.
*/

#include <iostream>
using namespace std;

int main() {
	float payAmount = 2200.0;
	int payPeriods = 26, annualPay;

	annualPay = payAmount * payPeriods;

	cout << "The amount the employee gets paid is: $" << annualPay;

	return 0;
}