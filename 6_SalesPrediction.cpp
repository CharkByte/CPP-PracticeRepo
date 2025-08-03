// C++ Practice. Basics to advanced topics
/*
	C++ Practice Sales Prediction Program

    This program will predict how much a company will generate with 
    8.6 million in sales this year.
*/


#include <iostream> 
#include <iomanip>
using namespace std;
int main()
{
    double percentage = 0.58, sales = 8.6, total;

    total = percentage * sales;

    cout << fixed << setprecision(2);
    cout << "The total amount of sales based on percent commission is ";
    cout << total << " million in revenue." << endl;
    return 0;
}
