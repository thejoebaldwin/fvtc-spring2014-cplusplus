#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//declare variable for grade
	double grade = 0;
	string letter_grade = "";
	bool quit = false;

	while (quit == false)
	{
		cout << "Enter a score:";
		//get input for grade
		cin >> grade;
	
		if (grade < 60)
		{
			//if it's less than 60 then run this code
			letter_grade = "F. You are awful at turning in homework.";
		}
		else if (grade < 70)
		{
			letter_grade = "D";
		}
		else if (grade < 80)
		{
			letter_grade = "C";
		}
		else if (grade < 90) 
		{
			letter_grade = "B";
		}
		else
		{
			letter_grade = "A";
		}
	
		cout << endl << "You got a " << letter_grade << endl;
		//pause for user input

		
		cout << "Press any key to continue, 'q' to quit" << endl;

		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
		
	} // end of while loop
	return 0;
}
