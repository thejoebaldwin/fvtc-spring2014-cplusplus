#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "HelperBot.h"
#include "Collection.h"

using namespace std;
int main()
{
	Collection c;
	cout << "Collection:" << c.GetValue(0);
	_getch();
	return 0;
}
