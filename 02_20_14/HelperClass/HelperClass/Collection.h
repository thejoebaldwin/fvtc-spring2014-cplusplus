#include <iostream>

using namespace std;

class Collection
{
private:
	int* _data;
	int _length;

public:
	//constructor
	Collection();
	//destructor
	~Collection();
	//getter for the private _length
	int Length();
	//returns a value in the index
	int GetValue(int index);
	//adds a value to the end
	void Add(int value);
};