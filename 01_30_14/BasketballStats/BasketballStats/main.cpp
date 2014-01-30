#include <iostream>
#include <conio.h>
#include <iomanip>
//need for shell color on windows machine
#include <Windows.h>
#include <string>
using namespace std;

//need to declare (but not define) before use
void setConsole();

int main()
{
	//dont copy this!
	setConsole();

	string badgers_name  = "Badgers";
	double badgers_win = 17;
	double badgers_loss = 4;

	string gophers_name = "Golden Gophers";
	double gophers_win = 15;
	double gophers_loss = 6;

	//do the fixed right away
	

	int column_width = 6;
	int column_width_wide = 20;

	cout << "Hexadecimal Gopher's Win -->" << hex << (int) gophers_win << endl << endl;
	cout << "Octal Badger's Win -->" << oct << (int) badgers_win << endl << endl;

  	cout << left << setw(15) << "Team" << setw(column_width) << right << "Win" << setw(column_width) <<" Loss" << setw(column_width_wide) << "Average Win/Loss" << endl;
	cout << left << setw(15) << badgers_name << right << setw(column_width) <<  badgers_win << setw(column_width) << badgers_loss  << setprecision(3) << setw(column_width_wide) << badgers_loss / badgers_win << endl << setprecision(0);
	cout << left << setw(15) << gophers_name << right << setw(column_width) << gophers_win << setw(column_width) << gophers_loss  << setprecision(3) << setw(column_width_wide) << gophers_loss / gophers_win << endl;
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