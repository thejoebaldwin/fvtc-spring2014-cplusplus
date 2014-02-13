#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	bool quit = false;
	int temp = 0;


	while (quit == false)
	{
		cout << "Please enter the curent temp:";
		cin >> temp;
		switch (temp)
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 10:
			cout << "It is cold" << endl;
			break;
		case 11:
			cout << "It's not that cold" << endl;
			break;
		case 12:
			cout << "Shorts Weather" << endl;
			break;
		default:
			break;



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
