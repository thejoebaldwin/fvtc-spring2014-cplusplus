#include "Collection.h"


	//constructor
	Collection::Collection()
	{
		//set the length to 1
		_length = 1;
		//create a new array of length 1
		_data = new int[_length];
		//initialize the array
		_data[0] = 0;
	}
	//destructor
	Collection::~Collection()
	{
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
	}