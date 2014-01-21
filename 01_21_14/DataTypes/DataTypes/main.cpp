#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>

using namespace std;

//dont type this
void setConsole();
//end of dont type this

int main()
{
	//dont type this
	setConsole();
	//end of dont type this

	int num = -5;
	int num2 = 27;

	bool success = true;
	double miles = 5.256;
	string hello = "hi there";
	char c = 'y';

	cout << "num =\t    " << num << endl;
	cout << "success =\t" << success << endl;
	cout << "miles =\t  " << miles << endl;
	cout << "hello =\t  " << hello << endl;
	cout << "c =\t      " << c << endl;
	cout << "num + num2 = " << num + num2 << endl;

	_getch();
	return 0;
}







void setConsole()
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