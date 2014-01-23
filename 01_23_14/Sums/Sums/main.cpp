#include <iostream>
#include <conio.h>
#include <iomanip>
//need for shell color on windows machine
#include <Windows.h>
using namespace std;

//need to declare (but not define) before use
void setConsole();

int main()
{
	setConsole();
  	

    double number1 = 3.678987654, number2 = 7,
		number3 = 11, sum = 0, average = 0, 
		product = 0, exponent, modulus;

	sum = number1 + number2 + number3;
	average = sum / 3;
	product = number1 * number2 * number3;
	exponent = pow(number1, number2);
	modulus = 5 % 2;

	cout << "Number1 = " << number1 << endl;
	cout << "Number2 = " << number2 << endl;
	cout << "Number3 = " << number3 << endl;

	cout << setprecision(3) << fixed;
	
	cout << "Sum = " << sum << endl;

	//cout << setprecision(1) << resetiosflags(ios::fixed); 

	

	cout << "Average = " << average << endl;
    cout << "Product = " << product << endl;
	cout << setprecision(1);
	cout << "Product = " << product << endl;

	cout << "Exponent = " << exponent << endl;
 
	cout << "Modulus = " << modulus << endl;

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