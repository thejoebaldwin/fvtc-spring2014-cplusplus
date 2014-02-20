#include <Windows.h>
#include "HelperBot.h"


bool HelperBot::IsNumeric(string value)
{
	//loop through all the characters
	//check whether they are 0-9
	//if not then return false
	//if they are, keep checking
	bool success = true;
	for (int i = 0; i < value.length(); i++)
	{
		//test if the character is a number here
		switch (value[i])
		{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				break;
			default:
				success = false;
		}
		if (!success) break;
	}
	return success;
}

int HelperBot::ConvertToInt(string value)
{
	int total = 0;
	//loop through string
	for (int i = 0; i < value.length(); i++)
	{
	//read character, convert to digit
		int digit = 0;
		switch(value[i])
		{
		case '9':
			digit++;
		case '8':
			digit++;
		case '7':
			digit++;
		case '6':
			digit++;
		case '5':
			digit++;
		case '4':
			digit++;
		case '3':
			digit++;
		case '2':
			digit++;
		case '1':
			digit++;
			break;
		}
		int number = digit * pow(10, value.length() - (i + 1));
		//add number to total
		total += number;
	}
	//return total
	return total;

}

void HelperBot::SetConsole()
{
	 //color value for console
	int color = 25;  
	//console reference	
	HANDLE	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//this will loop until either 0 is entered, or a non-numeric value

   	PCONSOLE_FONT_INFOEX font = new CONSOLE_FONT_INFOEX();
   	font->cbSize = sizeof(CONSOLE_FONT_INFOEX);
   
    	//CONSOLE_FONT_INFOEX is defined in some windows header
    	GetCurrentConsoleFontEx(hConsole, false, font);
	//PCONSOLE_FONT_INFOEX is the same as CONSOLE_FONT_INFOEX*
    	font->dwFontSize.X = 10;
    	font->dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(hConsole, false, font);
	SetConsoleTextAttribute(hConsole, 240); 
}