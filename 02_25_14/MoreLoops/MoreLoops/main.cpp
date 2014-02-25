#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include "..\..\..\02_20_14\HelperClass\HelperClass\HelperBot.h"
using namespace std;

void forLoopTest();
void whileLoopTest();
void doWhileLoopTest();


int main()
{
	HelperBot::SetConsole();

	bool quit = false;
	while(!quit)
	{
		doWhileLoopTest();
		cout << "any key to continue, 'q' to quit";
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}

	

	return 1;
}

void forLoopTest()
{
	/*
	string output[] = {"*", "**", "***", "****"};
	for (int i = 0; i < 4;i++)
	{
		cout << output[i] << endl;
	}
	*/
	/*
	for (int i = 1; i < 10;i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	*/
	string star = "*";
	int count = 10;
	for (int i = 0; i < count;i++)
	{
		cout << star << endl;
		star = star + "*";
	}
}

void whileLoopTest()
{
	int i = 0;
	string star = "*";

	while (i < 10)
	{
		cout << star << endl;
		star += "*";
		i++;
	}

}

void doWhileLoopTest()
{
	int i = 0;
	string star = "*";

	do
	{
		cout << star << endl;
		star += "*";
		i++;
	} while (i < 4);
}
