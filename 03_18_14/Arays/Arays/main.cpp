#include <iostream>
#include <conio.h>
#include "..\..\..\02_20_14\HelperClass\HelperClass\HelperBot.h"
#include <string>
using namespace std;


int main()
{
	HelperBot::SetConsole();

	int primes[] = {2,3,5,7,11,13};
	int primesLength = 6;
	int* primesPointer = &primes[0];

	cout << *(primesPointer + 1) << endl;


	const int kNumbersLength = 5;
	int numbers[kNumbersLength][kNumbersLength];
	string firstNames[] = {"rick", "jeff", "stacy" };
	string lastNames[][3] = {
		{"thompson", "pauls", "smith"},
		{"roberts", "jackson", "johnson"},
		{"mcdonald", "callahan", "skywalker"}
	};
	
	int num = 99;
	//int* numPointer = &numbers[0];
	numbers[0][0] = 5;
	numbers[0][1] = 7;
	numbers[0][2] = 1;
	numbers[0][3] = 2;
	numbers[0][4] = 3;
	
	//initialize the array
	for (int i = 0; i < kNumbersLength; i++)
	{
		for (int j = 0; j < kNumbersLength; j++)
		{
			numbers[i][j] = i * j;
		}
	}

	//output the array
	for (int i = 0; i < kNumbersLength; i++)
	{
		for (int j = 0; j < kNumbersLength; j++)
		{
			//space between each "column"
			cout << numbers[i][j] << " ";
		}
		//new line at the end of the "row"
		cout << endl;
	}



	
	


	_getch();

	return 1;
}
