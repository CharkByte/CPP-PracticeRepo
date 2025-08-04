// C++ Practice. Basics to advanced topics
/*
	Stock Commission Program

	This program will calculate the amount of a paid stock (without its commission).
	The amount of the commission, the total amount paid (for stock + commission).
	The # of shares that were bought was 750, the commission is 2 percent. The price
	of each stock was $35.
*/

#include <iostream>
using namespace std;

int main() {

	double shares = 750, stockPrice = 35.0, perCommission = 0.02,
		transactionCost, commissionCost, totalCost;

	transactionCost = shares * stockPrice;
	commissionCost = transactionCost * perCommission;
	totalCost = transactionCost + commissionCost;

	cout << "The amount paid for the stock alone (without commission) is: $"
		<< transactionCost << endl;
	cout << "The amount of the commission was: $" << commissionCost << endl;
	cout << "The overall cost with commisssion and transaction was: $"
		<< totalCost;

	return 0;
}