// C++ Practice. Basics to advanced topics
/*
	Test Score Program

	This program will ask a user for three test scores. After their 
	input, it will display their grade in the class.
*/

  #include <iostream>
  #include<iomanip>
  using namespace std;

  // function protototype (declaration)
  double getValidInput(int userInput);

  // main function
  int main()
  {
	  double t1Score, t2Score, t3Score, avgScore;

	  cout << "\nThis program will ask for three test scores and average out the tests\n";
	  cout << "It will display your grade afterwards and estimate if you passed.\n\n";
	  
	  t1Score = getValidInput(1);
	  if (t1Score < 0) return 1;

	  t2Score = getValidInput(2);
	  if (t2Score < 0) return 1;

	  t3Score = getValidInput(3);
	  if (t3Score < 0) return 1;

	  avgScore = (t1Score + t2Score + t3Score) / 3.0;

	  cout << fixed << setprecision(2);
	  cout << "\nYour average score was: " << avgScore;

	  if (avgScore > 90) {
		  cout << ", you received an A average in the class";
	  }
	  else if (avgScore > 80) {
		  cout << ", you received a B average in the class";
	  }
	  else if (avgScore > 70){
		  cout << ", you received a C average in the class";
	  }
	  else{
		  cout << "\n Sorry - you did not pass the class. Try again next semester." << endl;
	  }
	  return 0;
  }

  // function definitions
  double getValidInput(int testNumber)
  {
	  double testScore;
	  cout << "What was your test grade for test " << testNumber << " ?: ";
	  
	  // Error checking against unusable data
	  if (!(cin >> testScore)) {
		  cout << "Invalid input. Please enter a number for the score.\n";
		  cout << "Exiting due to invalid input.\n";
		  return -1;
	  }
	  if (testScore < 0 || testScore > 100) {
		  cout << "Error: Test score outside of 0 - 100 range.\n" << endl;
		  cout << "Exiting due to invalid input.\n";
		  return -1;
	  }
		  return testScore;
  }
