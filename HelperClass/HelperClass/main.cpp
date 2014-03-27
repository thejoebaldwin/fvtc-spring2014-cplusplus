#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "HelperBot.h"
#include "Collection.h"

using namespace std;

//void prettyPrint(Collection<int>);

int sum(int, int);
int sum(int, int, int);
//void tempCollectionTest();

struct Student
{
	string FirstName;
	string LastName;
	int Credits;
};


int main()
{
    Student jeff;
	jeff.FirstName = "Jeff";
	jeff.LastName = "Richards";
	jeff.Credits = 27;

	Collection<Student> students;
	students.Add(jeff);

	for (int i = 0; i < students.Length(); i++)
	{
		Student tempStudent = students[i];
		cout << tempStudent.LastName << "," << tempStudent.FirstName << endl; 
	}


	Collection<string> names;
	names.Add("Rick");
	names.Add("Tony");
	names.Add("Suzy");

	cout << "Names:" << names << endl;


	Collection<int> c;
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


void prettyPrint(Collection<int> c)
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

//
//void tempCollectionTest()
//{
//	Collection<int> temp;
//	for (int i = 0; i < 50; i++)
//	{
//		temp.Add(55);
//	}
//}