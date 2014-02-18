#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	bool quit = false;
	int flavor = 0;
	string flavors[] = {"Vanilla", "Chocolate", "Strawberry", "Blueberry"};
	int flavors_length = 4;

	while (quit == false)
	{
		cout << "Please select an ice cream flavor:" << endl;
		for (int i = 0; i < flavors_length; i++)
		{
			cout << i + 1 << ". " << flavors[i] << endl;
		}
		cin >> flavor;
		cout << "You entered:" << flavor << endl;
		//clear out istream after input
		cin.clear();
		fflush(stdin);

		if (flavor - 1 >= flavors_length || flavor - 1 < 0 )
		{
			cout << "Please enter a valid flavor" << endl;
		}
		else
		{
			cout << "You selected " << flavors[flavor - 1] << endl;
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
