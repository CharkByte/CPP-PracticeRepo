// C++ Practice. Basics to advanced topics
/*
	This program will convert user input seconds to minutes, hours, days 
	and months. Calculating how much time the input is. 
	
	Example: 
	A user input of 30 seconds = 30 seconds output
	A user input of 905 seconds = 15 minutes, 5 seconds output
	A user input of 30678 seconds = 8 hours, 31 minutes
	A user input of 6,008,792 = 69 days, 13 hours, 27 minutes
*/
#include <iostream>
using namespace std;

int main()
{
	// Variable declaration, units of time, remainders, and total
	int sec, rSec,
		min, rMin,
		hr, rHr,
		days, rDays,
		weeks, rWeeks,
		month, rMonth,
		years;

	cout << "This code will convert input seconds to minutes, hours, days, weeks, months, and years." << endl;
	cout << "Input the amount of seconds to convert: ";

	cin >> sec;

	// Seconds calculations
	if (sec >= 0 && sec < 60)
	{
		cout << "That amount of time is equal to " << sec << " seconds";
	}
	// Minutes calculations
	else if (sec >= 60 && sec < 3600)
	{
		min = sec / 60;
		rSec = sec % 60;

		cout << "That amount of time is equal to " << min << " minutes and ";
		cout << rSec << " seconds" << endl;
	}
	// Hours calculations
	else if (sec >= 3600 && sec < 86400)
	{
		hr = sec / 3600;
		rHr = (sec % 3600) / 60;

		cout << "That amount of time is equal to " << hr << " hours and ";
		cout << rHr << " minutes" << endl;
	}
	// Days calculations
	else if (sec >= 86400 && sec < 604800)
	{
		days = sec / 86400;
		rDays = (sec % 86400) / 3600;

		cout << "That amount of time is equal to " << days << " days and ";
		cout << rDays << " hours" << endl;
	}
	// Weeks calculations
	else if (sec >= 604800 && sec < 2592000)
	{
		weeks = sec / 604800;
		rWeeks = (sec % 604800) / 86400;

		cout << "That amount of time is equal to " << weeks << " weeks and ";
		cout << rWeeks << " days" << endl;
	}
	// Months calculations (assuming 30 days per month for simplicity)
	else if (sec >= 2592000 && sec < 31536000)
	{
		month = sec / 2592000;
		rMonth = (sec % 2592000) / 604800;

		cout << "That amount of time is equal to " << month << " months and ";
		cout << rMonth << " weeks" << endl;
	}
	// Years calculations (assuming 365 days per year)
	else if (sec >= 31536000)
	{
		years = sec / 31536000;
		int rYears = (sec % 31536000) / 2592000;

		cout << "That amount of time is equal to " << years << " years and ";
		cout << rYears << " months" << endl;
	}
	else
	{
		cout << "Incorrect input amount, try again.";
	}

	return 0;
}
