// C++ Practice. Basics to advanced topics
/*
	Circuit board price program

	This program will calculate the selling price of a circuit board that costs 
	$14.95 at a 35% profit. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float profitPercent = 0.35, sellPrice = 14.95, pricePercent, totCost;

	pricePercent = profitPercent * sellPrice;
	totCost = pricePercent + sellPrice;

	cout << fixed << setprecision(2);
	cout << "The selling price of the circuit board is: $"
		 << sellPrice << endl;
	cout << "The cost for the 35 percent increase is: $"
		 << pricePercent << endl;
	cout << "The total cost of the circuit board will be: $"
		 << totCost; 

	return 0;
}