#include <iostream>
using namespace std;

int main()
{
	int hours, rate, pay;
	bool runAgain;

	// Get the number of hours worked. 
	cout << "How many hours did you work? ";
	cin >> hours;

	// Check the input from users
	if (hours < 1)
	{
		cout << endl << "Did not work" << endl;
	}
	else if (hours == 1)
	{
		cout << endl << "Worked " << hours << " hour" << endl;
	}
	else if (hours > 1)
	{
		cout << endl << "Worked " << hours << " hours" << endl;
	}


	// Get hourly pay
	cout << endl << "How much did you get paid? $";
	cin >> rate;

	// Calculate pay
	pay = hours * rate;

	// Case check for negative values
	if (pay <= 0)
	{
		pay = 0;
	}

	cout << endl << "You earned: $" << pay << endl;

	// Start Program again or Exit Option
	cout << endl << "Run payment calculation again? (Enter 1 to run program again)" << endl;
	cin >> runAgain;

	if (runAgain == 1)
	{
		system("cls");
		main();
	}
	else
	{
		cout << "Program Exit." << endl;
		return 0;
	}

}