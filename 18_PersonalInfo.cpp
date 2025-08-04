// C++ Practice. Basics to advanced topics
/*
	Personal Info program

	This program will display personal information of a fictional person, 
	only using a single cout statement.
*/

#include <iostream>
using namespace std;

int main() {

	string name = "Person", address = "Whosville Street", city = "whoCity", 
		state = "whoState", zipcode = "11111", telephone = "(0)123-4567",
		collegeMajor = "computer science";


	cout << "The name is: " << name <<
		", \nthe address is: " << address <<
		",\nthe city is: " << city <<
		",\nthe state is: " << state <<
		",\nthe zip code is: " << zipcode <<
		",\nthe telephone is: " << telephone <<
		",\nthe college major is: " << collegeMajor;

	return 0;
}