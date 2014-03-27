#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "HelperBot.h"
#include "Collection.h"

using namespace std;

void prettyPrint(Collection);

int sum(int, int);
int sum(int, int, int);
void tempCollectionTest();

int main()
{
	Collection c;
	c.Add(5);
	c.Add(7);
	c.Add(11);
	c.Add(13);

	cout << "Length of Collection: " << c.Length() << endl;

    cout << c << endl;

	cout << "Element at 0:" << c[0] << endl;

	int numbers[] = {1, 2, 3};

	numbers[0] = 999;
	cout <<"numbers[0]:" << numbers[0] << endl;

	c[0] = 999;
	cout << "c[0]:" << c[0] << endl;



	_getch();
	
	return 0;
}


void prettyPrint(Collection c)
{
	cout << "{";
	for (int i = 0; i < c.Length(); i++)
	{
		if (i > 0) cout << ",";
		cout << c.GetValue(i);
	}
	cout << "}" << endl;
}


int sum(int n1, int n2)
{
	return n1 + n2;
}

int sum(int n1, int n2, int n3)
{
	return n1 + n2;
}


void tempCollectionTest()
{
	Collection temp;
	for (int i = 0; i < 50; i++)
	{
		temp.Add(55);
	}
}