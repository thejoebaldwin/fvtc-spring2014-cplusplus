#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <conio.h>
#include "..\..\..\02_20_14\HelperClass\HelperClass\HelperBot.h"
using namespace std;

string printArray(int[], int);
string toCurrency(double);

int main()
{
	HelperBot::SetConsole();
	int length = 5;
	//int numbers[] = {6, 7, 8, 9, 10};
	//int numbers2[] = {6, 7, 8, 9, 10, 11};
	int* numbers = new int[length];
	numbers[0] = 6;
	numbers[1] = 7;
	numbers[2] = 8,
	numbers[3] = 9;
	numbers[4] = 10;
	cout <<"Original:" << printArray(numbers, length) << endl;

	int* numbers2 = new int[length + 1];
	
	for (int i = 0; i < length;i++)
	{
		numbers2[i] = numbers[i];
	}

	numbers2[5] = 11;

    numbers = numbers2;
	cout <<"New One:" << printArray(numbers, length + 1) << endl;
	
	
	
	
	
    /*
	double value = 99999.99;
	cout << "ToCurrency Test:" << toCurrency(value) << endl;
	*/
	_getch();
	return 1;
}

string toCurrency(double value)
{
	string output = "";
	char temp[100];
	sprintf(temp, "$%0.2f", value);
    output = temp;
	return output;
}


string printArray(int arr[], int length)
{
	string output = "";
	output += "{";
	char temp[100] = "";
	for (int i = 0; i < length; i++)
	{
		//tostring() - print format to char aray
		sprintf(temp, "%i", arr[i]);
		output += temp;
		if (i < length - 1)
		{
			output += ",";
		}
	}
	output += "}";
	return output;
}