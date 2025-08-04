// C++ Practice. Basics to advanced topics
/*
	Energy drink consumption program

	This program will approximate the number of customers in the survey who purchase
	one or more energy drinks per week. It will also approximate the number of 
	customers in the survey who prefer citrus flavored energy. 
	
	There are 16,500 customers, approximately 58 percent of customers prefer citrus 
	flavored drinks, around 15% of those surveyed purchase one or more energy drinks 
	per week.
*/

#include <iostream>
using namespace std;

int main() {
	
	double customers = 16500, weeklyCustomerPercent = 0.15, citrusCustomersPercent = 0.58,
		   weeklyCustomers, citrusCustomers;

	weeklyCustomers = customers * weeklyCustomerPercent;
	citrusCustomers = customers * citrusCustomersPercent;

	cout << "The amount of customers that buy energy drinks every week are: "
	     << weeklyCustomers << endl;
	cout << "The amount of citrus energy drink buyers are: " << citrusCustomers;

	return 0;
}