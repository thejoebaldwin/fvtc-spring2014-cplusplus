#include <iostream>
#include <conio.h>
#include <string>
#include "..\..\..\02_20_14\HelperClass\HelperClass\HelperBot.h"
using namespace std;

double getSum(double, double, double);

int main()
{
	HelperBot::SetConsole();
	double num1 = 0, num2 = 0, num3 = 0;
	string input1 = "", input2 = "", input3 = "";
	bool quit = false;
	while (!quit)
	{
		cout << "Please enter the first number:";
		cin >> input1;
		cout << endl << "Please enter the second number:";
		cin >> input2;
		cout << endl << "Please enter the third number:";
		cin >> input3;
		if (HelperBot::IsNumeric(input1) 
			&& HelperBot::IsNumeric(input2) 
			&& HelperBot::IsNumeric(input3))
		{
			//success
			num1 = HelperBot::ConvertToDouble(input1);
			num2 = HelperBot::ConvertToDouble(input2);
			num3 = HelperBot::ConvertToDouble(input3);
			cout << "The sum of the numbers is:" << getSum(num1, num2, num3) << endl;
		}
		else
		{
			cout << "Please enter valid input for all 3 numbers" << endl;
		}
		cout << "Press any key to continue, 'q' to quit" << endl;
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 0;
}

double getSum(double num1, double num2, double num3)
{
	return num1 + num2 + num3;
}