// C++ Practice. Basics to advanced topics
/*
	Sales Tax Program

    This program will compute the total sales tax of a purchase. The sales
    tax is 4 percent and the county sales tax is 2 percent.
*/

#include <iostream> 
#include <iomanip>
using namespace std;
int main()
{
    double purchase = 95.00, stateTax = 0.04, countyTax = 0.02, 
        stateFee, countyFee, totalCost;

    stateFee = purchase * stateTax;
    countyFee = purchase * countyTax;
    totalCost = purchase + stateFee + countyFee;




    cout << fixed << setprecision(2);
    cout << "The total amount for the purchase is: $";
    cout << totalCost << "\nincluding the state fee: $" << stateFee
         << "\nand county fee: $" << countyFee << endl;
    return 0;
}
