#include <conio.h>
#include <iostream>
#include "..\..\HelperClass\HelperClass\HelperBot.h"

using namespace std;

//application to test out our new helperbot class

int main()
{
	HelperBot::SetConsole();

	cout << "test";
	string input = "";
	cin >> input;
	if (HelperBot::IsNumeric(input))
	{
		cout << "Yup" << endl;
	}
	else
	{
		cout << "Nope" << endl;
	}


	_getch();
	return 0;
}