#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	bool quit = false;
	int flavor = 0;

	while (quit == false)
	{
		cout << "Please select an ice cream flavor:" << endl;
		cout << "1. Vanilla" << endl;
		cout << "2. Chocolate" << endl;
		cout << "3. Strawberry" << endl;
		cout << "Your selection:";
		cin >> flavor;
		//output to the user which flavor they selected
		switch (flavor)
		{
		case 1:
			cout << "You ordered Vanilla" << endl;
			break;
		case 2:
			cout << "You ordered Chocolate" << endl;
			break;
		case 3:
			cout << "You ordered Strawberry" << endl;
			break;
		default:
			cout << "Please enter a valid flavor number" << endl;
			break;
		}


		//control structure code
		cout << "Press any key to continue, 'q' to quit" << endl;
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 0;
}
