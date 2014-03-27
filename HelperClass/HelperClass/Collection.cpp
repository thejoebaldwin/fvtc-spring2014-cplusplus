#include "Collection.h"


	//constructor
	Collection::Collection()
	{
		//set the length to 0
		_length = 0;
		//create a new array of length 0
		_data = new int[_length];
		//initialize the array
		//_data[0] = 0;
	}
	//destructor
	Collection::~Collection()
	{
		//frees up memory when insance variable leaves scope
		delete[] _data;
	}

	//getter for the private _length
	int Collection::Length()
	{
		return _length;
	}
	//returns a value in the index
	int Collection::GetValue(int index)
	{
		//add check to see if index is past length
		return _data[index];
	}
	//adds a value to the end
	void Collection::Add(int value)
	{
		//declare new array of _length + 1
		int *temp = new int[_length + 1];
		//copy old elements in new array
		for (int i = 0; i < _length; i++)
		{
			temp[i] = _data[i];
		}
		//add new value to end of new array
		temp[_length] = value;
		//delete old array to free up memory
		delete[] _data;
		//point _data to new array
		_data = temp;
		_length++;
	}

	

	ostream& operator<<(ostream &out, Collection &c)
	{
		out << "{";
		for (int i = 0; i < c.Length(); i++)
		{
			if (i > 0) out << ",";
			out << c[i];
		}
		out << "}" << endl;
		return out;
	}

	int& Collection::operator[](int index)
	{
		return _data[index];
	}

	