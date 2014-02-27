#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "..\..\..\02_20_14\HelperClass\HelperClass\HelperBot.h"
using namespace std;


bool TryParse(string, int&);

int main()
{
	bool quit = false;

	while (!quit)
	{
    	
		cout << "Please enter a number:";
		string user_input = "";
		int number = 0;
		cin >> user_input;

		if (TryParse(user_input, number))
		{
			cout << endl << "You entered:" << number << endl;
		}
		else
		{
			cout << endl << "That is not a number" << endl;
		}
		cout << "Input final value:" << user_input << endl;
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}

	return 0;
}

bool TryParse(string input, int& value)
{
	bool success = HelperBot::IsNumeric(input);
	if (success)
	{
		value = HelperBot::ConvertToInt(input);
	}
	input = "blah blah";
	return success;
}