// C++ Practice. Basics to advanced topics
/*
	Restaurant Bill Program

	This program will compute tax and tip on a restaurant bill with a 
	meal that costs $88.67. The tax is $6.75 of the meal cost. The tip 
	is 20 percent of the total after adding tax. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float mealCost = 88.67, mealTax = 0.0675, mealTip = 0.2, 
		taxCost, tipCost, totalBill;

	taxCost = mealCost * mealTax;
	tipCost = (mealCost+taxCost) * mealTip;

	totalBill = mealCost + taxCost + tipCost;

	cout << fixed << setprecision(2)
		 << "The cost of the meal is: $" << mealCost
		 << ",\n the total cost of the tax is: $" << taxCost
		 << ",\n the total cost of the tip is: $" << tipCost
		 << ",\n the total cost of the bill is: $" << totalBill;

	return 0;
}