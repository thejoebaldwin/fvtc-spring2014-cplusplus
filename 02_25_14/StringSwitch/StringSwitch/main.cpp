#include <iostream>
#include <conio.h>
#include <string>

using namespace std;



enum opp
	{
		MULTIPLY,
		ADD,
		DIVIDE,
		SUBTRACT
	};

opp getOperation(string);

int main()
{


	string test = "";
	opp oper = getOperation(test);
	switch (test)
	{
	case "hello":
		break;


	}


	return 0;
}

opp getOperation(string s)
{
	if (s == "multiply")
	{
		return MULTIPLY;
	}
	else if (s == "divide")
	{
		return DIVIDE;
	}
	else if (s == "subtract")
	{
		return SUBTRACT;
	}
	else
	{
		return ADD;
	}


}