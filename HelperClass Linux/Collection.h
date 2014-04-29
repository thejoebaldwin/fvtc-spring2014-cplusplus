#include <iostream>

using namespace std;

template <class T>
class Collection
{
private:
	T* _data;
	int _length;
	bool _sorted;
    int LinearSearch(T);
public:
	//constructor
	Collection();
	//destructor
	~Collection();
	//getter for the private _length
	int Length();
	//returns a value in the index
	T GetValue(int);
	//s a value to the end
	void Add(T);

	//ostream& operator<<(ostream&, Collection<T>&);
	T& operator[](int);
    void Sort();

    int IndexOf(T);
    bool Contains(T);

};



	//constructor
    template <class T>
	Collection<T>::Collection()
	{
		//set the length to 0
		_length = 0;
		//create a new array of length 0
		_data = new T[_length];
		//initialize the array
		//_data[0] = 0;
	}
	//destructor
	template <class T>
	Collection<T>::~Collection()
	{
		//frees up memory when insance variable leaves scope
		delete[] _data;
	}

	//getter for the private _length
	template <class T>
	int Collection<T>::Length()
	{
		return _length;
	}
	//returns a value in the index
	template <class T>
	T Collection<T>::GetValue(int index)
	{
		//add check to see if index is past length
		return _data[index];
	}
	//adds a value to the end
	template <class T>
	void Collection<T>::Add(T value)
	{
		//declare new array of _length + 1
		T *temp = new T[_length + 1];
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
		_sorted = false;
	}

    template <class T>
	ostream& operator<<(ostream &out, Collection<T> &c)
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

	template <class T>
	T& Collection<T>::operator[](int index)
	{
		return _data[index];
	}


template <class T>
void Collection<T>::Sort()
{
 bool sorted;
 do
 {
     sorted = true;
     for (int i = 0; i < _length - 1; i++)
     {
         if (_data[i] > _data[i+1])
         {
             T temp = _data[i];
             _data[i] = _data[i + 1];
             _data[i + 1] = temp;
             sorted = false;
         }
     }
 } while (!sorted);
 _sorted = true;
}

template <class T>
int Collection<T>::LinearSearch(T value)
{
 int index = -1;
 for (int i = 0; i < _length; i++)
 {
     if (_data[i] == value)
     {
         index = i;
         break;
     }
     else if (_sorted && _data[i] > value)
     {
         break;
     }
 }
 return index;
}

template <class T>
int Collection<T>::IndexOf(T value)
{
    int index = -1;
    index = LinearSearch(value);
    return index;
}

template <class T>
bool Collection<T>::Contains(T value)
{
    return IndexOf(value) > -1;
}
