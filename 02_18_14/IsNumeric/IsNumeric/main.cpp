#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

void doNothing();

bool IsNumeric(string);
int ConvertToInt(string);

int main()
{
    doNothing();

	bool quit = false;

	
	while (!quit)
	{
		cout << "Please enter a number:";
		string input = "";
		cin >> input;
		bool success = IsNumeric(input);
		cout << "Success:" << success << endl;
		if (success)
		{
			cout << "The number is " << ConvertToInt(input) << endl;
		}
	}
	return 0;
}


void doNothing()
{
	cout << "Im doing nothing" << endl;
}

bool IsNumeric(string value)
{
	//loop through all the characters
	//check whether they are 0-9
	//if not then return false
	//if they are, keep checking
	bool success = true;
	for (int i = 0; i < value.length(); i++)
	{
		//test if the character is a number here
		switch (value[i])
		{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				break;
			default:
				success = false;
		}

		if (!success) break;
	}

	return success;
}

int ConvertToInt(string value)
{
	int total = 0;
	//loop through string
	for (int i = 0; i < value.length(); i++)
	{
	//read character, convert to digit
		int digit = 0;
		switch(value[i])
		{
		case '9':
			digit++;
		case '8':
			digit++;
		case '7':
			digit++;
		case '6':
			digit++;
		case '5':
			digit++;
		case '4':
			digit++;
		case '3':
			digit++;
		case '2':
			digit++;
		case '1':
			digit++;
			break;
		}
	//number = digit x 10 ^ (length - (i + 1))
		

		//int number = digit * 10 ^ (value.length() - (i + 1));
		int number = digit * pow(10, value.length() - (i + 1));
	//add number to total
		total += number;
	}
	//return total
	return total;
}