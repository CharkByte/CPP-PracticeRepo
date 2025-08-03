// C++ Practice. Basics to advanced topics
/*
	Total Purchase Program
	
	This program will hold the five items in five variables, 
	display each price, the subtotal of the sale, the amount of sales
	tax and the total cost of everything. The sales tax is 7%
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95,
		subTotal, salesTaxPercent = 0.07, salesTax, totalCost;

	subTotal = item1 + item2 + item3 + item4 + item5;
	salesTax = salesTaxPercent * subTotal;
	totalCost = subTotal + salesTax;

	cout << fixed << setprecision(2);
	cout << "The subtotal for all items is: $" << subTotal << endl;
	cout << "the sales tax is: $" << salesTax << endl;
	cout << "the total cost of the sale is: $" << totalCost;

	return 0;
}