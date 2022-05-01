// ConsoleApplication19.cpp : Зробив Alex Maz
//

#include <iostream>	
#include <time.h> 
#include <stdio.h>  
#include <windows.h> 
#include <conio.h> 
#include <fstream>
using namespace std;

HANDLE myConsole;	//HANDLE hStdout, hStdin;
HANDLE myStdOut = GetStdHandle(STD_OUTPUT_HANDLE); // ф-ція для виклику дескриптора консольного вікна... 

void GotoXY(int X, int Y) {
	COORD crd = { X, Y };			// Задаємо перемінну типу COORD - структуру з полями X i Y.
	SetConsoleCursorPosition(myStdOut, crd);  // встановлює положення курсора вконсольному вікні.
}

enum colorConsol {			// ф-ція для переліку кольорів...
	Black,
	Blue,
	Green,
	Cyan,
	Red,
	Magenta,
	Brown,
	LightGray,
	DarkGray,
	LightBlue,
	LightGreen,
	LightCyan,
	LightRed,
	LightMagenta,
	Yellow,
	White
};

void SetColor(colorConsol text, colorConsol background) {
	SetConsoleTextAttribute(myStdOut, (WORD)((background << 4) | text)); // ф-ція для задавання кольорів нашої кнсолі та тексту...
}

class Chusla {
protected:
	int a = 1;
	int b = 2;
	int c = 3;
public:
	Chusla() {}
	int GetA() { return this->a; }
	int GetB() { return this->b; }
	int GetC() { return this->c; }

	bool SetABC(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
		return 1;
	}
	void drawNumber();

};

void Chusla::drawNumber()
{
	switch (GetA())
	{
	case 0:
		SetColor(Yellow, Black);
		GotoXY(15, 9); cout << "++";
		GotoXY(13, 9); cout << "++";
		GotoXY(11, 10); cout << "++";
		GotoXY(10, 11); cout << "++";
		GotoXY(17, 10); cout << "++";
		GotoXY(18, 11); cout << "++";
		GotoXY(18, 12); cout << "++";
		GotoXY(18, 13); cout << "++";
		GotoXY(18, 14); cout << "++";
		GotoXY(18, 15); cout << "++";
		GotoXY(18, 16); cout << "++";
		GotoXY(18, 17); cout << "++";
		GotoXY(17, 18); cout << "++";
		GotoXY(15, 19); cout << "++";
		GotoXY(13, 19); cout << "++";
		GotoXY(11, 18); cout << "++";
		GotoXY(10, 12); cout << "++";
		GotoXY(10, 13); cout << "++";
		GotoXY(10, 14); cout << "++";
		GotoXY(10, 15); cout << "++";
		GotoXY(10, 16); cout << "++";
		GotoXY(10, 17); cout << "++";

		break;
	case 1:
		SetColor(White, Black);
		GotoXY(16, 9); cout << "++";
		GotoXY(15, 10); cout << "++";
		GotoXY(14, 11); cout << "++";
		GotoXY(13, 12); cout << "++";
		GotoXY(12, 13); cout << "++";
		GotoXY(17, 9); cout << "++";
		GotoXY(17, 10); cout << "++";
		GotoXY(17, 11); cout << "++";
		GotoXY(17, 12); cout << "++";
		GotoXY(17, 13); cout << "++";
		GotoXY(17, 14); cout << "++";
		GotoXY(17, 15); cout << "++";
		GotoXY(17, 16); cout << "++";
		GotoXY(17, 17); cout << "++";
		GotoXY(17, 18); cout << "++";
		GotoXY(17, 19); cout << "++";

		break;
	case 2:
		SetColor(LightBlue, Black);
		GotoXY(15, 9); cout << "++";
		GotoXY(13, 9); cout << "++";
		GotoXY(11, 10); cout << "++";
		GotoXY(10, 11); cout << "++";
		GotoXY(17, 10); cout << "++";
		GotoXY(17, 11); cout << "++";
		GotoXY(17, 12); cout << "++";
		GotoXY(16, 13); cout << "++";
		GotoXY(15, 14); cout << "++";
		GotoXY(14, 15); cout << "++";
		GotoXY(13, 16); cout << "++";
		GotoXY(12, 17); cout << "++";
		GotoXY(11, 18); cout << "++";
		GotoXY(17, 18); cout << "++";
		GotoXY(10, 19); cout << "++";
		GotoXY(12, 19); cout << "++";
		GotoXY(14, 19); cout << "++";
		GotoXY(16, 19); cout << "++";
		GotoXY(17, 19); cout << "++";

		break;
	case 3:
		SetColor(LightMagenta, Black);
		GotoXY(15, 9); cout << "++";
		GotoXY(13, 9); cout << "++";
		GotoXY(11, 10); cout << "++";
		GotoXY(17, 10); cout << "++";
		GotoXY(18, 11); cout << "++";
		GotoXY(18, 12); cout << "++";
		GotoXY(17, 13); cout << "++";
		GotoXY(16, 14); cout << "++";
		GotoXY(15, 14); cout << "++";
		GotoXY(17, 15); cout << "++";
		GotoXY(18, 16); cout << "++";
		GotoXY(18, 17); cout << "++";
		GotoXY(17, 18); cout << "++";
		GotoXY(15, 19); cout << "++";
		GotoXY(13, 19); cout << "++";
		GotoXY(11, 18); cout << "++";

		break;
	case 4:
		SetColor(LightRed, Black);
		GotoXY(11, 9); cout << "++";
		GotoXY(11, 10); cout << "++";
		GotoXY(11, 11); cout << "++";
		GotoXY(11, 12); cout << "++";
		GotoXY(11, 13); cout << "++";
		GotoXY(13, 13); cout << "++";
		GotoXY(15, 13); cout << "++";
		GotoXY(11, 14); cout << "++";
		GotoXY(13, 14); cout << "++";
		GotoXY(15, 14); cout << "++";
		GotoXY(17, 9); cout << "++";
		GotoXY(17, 10); cout << "++";
		GotoXY(17, 11); cout << "++";
		GotoXY(17, 12); cout << "++";
		GotoXY(17, 13); cout << "++";
		GotoXY(17, 14); cout << "++";
		GotoXY(17, 15); cout << "++";
		GotoXY(17, 16); cout << "++";
		GotoXY(17, 17); cout << "++";
		GotoXY(17, 18); cout << "++";
		GotoXY(17, 19); cout << "++";

		break;
	case 5:
		SetColor(LightCyan, Black);
		GotoXY(15, 9); cout << "++";
		GotoXY(13, 9); cout << "++";
		GotoXY(17, 9); cout << "++";
		GotoXY(16, 14); cout << "++";
		GotoXY(14, 14); cout << "++";
		GotoXY(12, 14); cout << "++";
		GotoXY(12, 15); cout << "++";
		GotoXY(11, 15); cout << "++";
		GotoXY(11, 14); cout << "++";
		GotoXY(11, 13); cout << "++";
		GotoXY(11, 12); cout << "++";
		GotoXY(11, 11); cout << "++";
		GotoXY(11, 10); cout << "++";
		GotoXY(11, 9); cout << "++";
		GotoXY(17, 15); cout << "++";
		GotoXY(18, 16); cout << "++";
		GotoXY(18, 17); cout << "++";
		GotoXY(17, 18); cout << "++";
		GotoXY(15, 19); cout << "++";
		GotoXY(13, 19); cout << "++";
		GotoXY(11, 18); cout << "++";

		break;
	case 6:
		SetColor(LightGreen, Black);
		GotoXY(15, 9); cout << "++";
		GotoXY(13, 9); cout << "++";
		GotoXY(11, 10); cout << "++";
		GotoXY(10, 11); cout << "++";
		GotoXY(17, 10); cout << "++";
		GotoXY(15, 13); cout << "++";
		GotoXY(13, 13); cout << "++";
		GotoXY(11, 14); cout << "++";
		GotoXY(17, 14); cout << "++";
		GotoXY(18, 15); cout << "++";
		GotoXY(18, 16); cout << "++";
		GotoXY(18, 17); cout << "++";
		GotoXY(17, 18); cout << "++";
		GotoXY(15, 19); cout << "++";
		GotoXY(13, 19); cout << "++";
		GotoXY(11, 18); cout << "++";
		GotoXY(10, 12); cout << "++";
		GotoXY(10, 13); cout << "++";
		GotoXY(10, 14); cout << "++";
		GotoXY(10, 15); cout << "++";
		GotoXY(10, 16); cout << "++";
		GotoXY(10, 17); cout << "++";

		break;
	case 7:
		SetColor(Yellow, Black);
		GotoXY(15, 9); cout << "++";
		GotoXY(13, 9); cout << "++";
		GotoXY(11, 9); cout << "++";
		GotoXY(10, 9); cout << "++";
		GotoXY(10, 10); cout << "++";
		GotoXY(17, 9); cout << "++";
		GotoXY(17, 10); cout << "++";
		GotoXY(16, 11); cout << "++";
		GotoXY(15, 12); cout << "++";
		GotoXY(14, 13); cout << "++";
		GotoXY(13, 14); cout << "++";
		GotoXY(13, 15); cout << "++";
		GotoXY(13, 16); cout << "++";
		GotoXY(13, 17); cout << "++";
		GotoXY(13, 18); cout << "++";
		GotoXY(13, 19); cout << "++";

		break;
	case 8:
		SetColor(LightGreen, Black);
		GotoXY(15, 9); cout << "++";
		GotoXY(13, 9); cout << "++";
		GotoXY(11, 10); cout << "++";
		GotoXY(10, 11); cout << "++";
		GotoXY(17, 10); cout << "++";
		GotoXY(18, 11); cout << "++";
		GotoXY(18, 12); cout << "++";
		GotoXY(17, 13); cout << "++";
		GotoXY(16, 14); cout << "++";
		GotoXY(14, 14); cout << "++";
		GotoXY(17, 15); cout << "++";
		GotoXY(18, 16); cout << "++";
		GotoXY(18, 17); cout << "++";
		GotoXY(17, 18); cout << "++";
		GotoXY(15, 19); cout << "++";
		GotoXY(13, 19); cout << "++";
		GotoXY(11, 18); cout << "++";
		GotoXY(10, 12); cout << "++";
		GotoXY(11, 13); cout << "++";
		GotoXY(12, 14); cout << "++";
		GotoXY(11, 15); cout << "++";
		GotoXY(10, 16); cout << "++";
		GotoXY(10, 17); cout << "++";

		break;
	case 9:
		SetColor(LightCyan, Black);
		GotoXY(15, 9); cout << "++";
		GotoXY(13, 9); cout << "++";
		GotoXY(11, 10); cout << "++";
		GotoXY(10, 11); cout << "++";
		GotoXY(17, 10); cout << "++";
		GotoXY(18, 11); cout << "++";
		GotoXY(18, 12); cout << "++";
		GotoXY(18, 13); cout << "++";
		GotoXY(18, 13); cout << "++";
		GotoXY(18, 14); cout << "++";
		GotoXY(18, 14); cout << "++";
		GotoXY(18, 15); cout << "++";
		GotoXY(18, 16); cout << "++";
		GotoXY(18, 17); cout << "++";
		GotoXY(17, 18); cout << "++";
		GotoXY(15, 19); cout << "++";
		GotoXY(13, 19); cout << "++";
		GotoXY(11, 18); cout << "++";
		GotoXY(10, 12); cout << "++";
		GotoXY(11, 13); cout << "++";
		GotoXY(13, 14); cout << "++";
		GotoXY(15, 14); cout << "++";

		break;
	default:
		break;
	}
	switch (GetB())
	{
	case 0:
		SetColor(Yellow, Black);
		GotoXY(28, 9); cout << "++";
		GotoXY(26, 9); cout << "++";
		GotoXY(24, 10); cout << "++";
		GotoXY(23, 11); cout << "++";
		GotoXY(30, 10); cout << "++";
		GotoXY(31, 11); cout << "++";
		GotoXY(31, 12); cout << "++";
		GotoXY(31, 13); cout << "++";
		GotoXY(31, 14); cout << "++";
		GotoXY(31, 15); cout << "++";
		GotoXY(31, 16); cout << "++";
		GotoXY(31, 17); cout << "++";
		GotoXY(30, 18); cout << "++";
		GotoXY(28, 19); cout << "++";
		GotoXY(26, 19); cout << "++";
		GotoXY(24, 18); cout << "++";
		GotoXY(23, 12); cout << "++";
		GotoXY(23, 13); cout << "++";
		GotoXY(23, 14); cout << "++";
		GotoXY(23, 15); cout << "++";
		GotoXY(23, 16); cout << "++";
		GotoXY(23, 17); cout << "++";

		break;
	case 1:
		SetColor(White, Black);
		GotoXY(27, 9); cout << "++";
		GotoXY(26, 10); cout << "++";
		GotoXY(25, 11); cout << "++";
		GotoXY(24, 12); cout << "++";
		GotoXY(23, 13); cout << "++";
		GotoXY(28, 9); cout << "++";
		GotoXY(28, 10); cout << "++";
		GotoXY(28, 11); cout << "++";
		GotoXY(28, 12); cout << "++";
		GotoXY(28, 13); cout << "++";
		GotoXY(28, 14); cout << "++";
		GotoXY(28, 15); cout << "++";
		GotoXY(28, 16); cout << "++";
		GotoXY(28, 17); cout << "++";
		GotoXY(28, 18); cout << "++";
		GotoXY(28, 19); cout << "++";

		break;
	case 2:
		SetColor(LightBlue, Black);
		GotoXY(29, 9); cout << "++";
		GotoXY(27, 9); cout << "++";
		GotoXY(25, 10); cout << "++";
		GotoXY(24, 11); cout << "++";
		GotoXY(31, 10); cout << "++";
		GotoXY(31, 11); cout << "++";
		GotoXY(31, 12); cout << "++";
		GotoXY(30, 13); cout << "++";
		GotoXY(29, 14); cout << "++";
		GotoXY(28, 15); cout << "++";
		GotoXY(27, 16); cout << "++";
		GotoXY(26, 17); cout << "++";
		GotoXY(25, 18); cout << "++";
		GotoXY(31, 18); cout << "++";
		GotoXY(24, 19); cout << "++";
		GotoXY(26, 19); cout << "++";
		GotoXY(28, 19); cout << "++";
		GotoXY(30, 19); cout << "++";
		GotoXY(31, 19); cout << "++";

		break;
	case 3:
		SetColor(LightMagenta, Black);
		GotoXY(28, 9); cout << "++";
		GotoXY(26, 9); cout << "++";
		GotoXY(24, 10); cout << "++";
		GotoXY(30, 10); cout << "++";
		GotoXY(31, 11); cout << "++";
		GotoXY(31, 12); cout << "++";
		GotoXY(30, 13); cout << "++";
		GotoXY(29, 14); cout << "++";
		GotoXY(28, 14); cout << "++";
		GotoXY(30, 15); cout << "++";
		GotoXY(31, 16); cout << "++";
		GotoXY(31, 17); cout << "++";
		GotoXY(30, 18); cout << "++";
		GotoXY(28, 19); cout << "++";
		GotoXY(26, 19); cout << "++";
		GotoXY(24, 18); cout << "++";

		break;
	case 4:
		SetColor(LightRed, Black);
		GotoXY(24, 9); cout << "++";
		GotoXY(24, 10); cout << "++";
		GotoXY(24, 11); cout << "++";
		GotoXY(24, 12); cout << "++";
		GotoXY(24, 13); cout << "++";
		GotoXY(26, 13); cout << "++";
		GotoXY(28, 13); cout << "++";
		GotoXY(24, 14); cout << "++";
		GotoXY(26, 14); cout << "++";
		GotoXY(28, 14); cout << "++";
		GotoXY(30, 9); cout << "++";
		GotoXY(30, 10); cout << "++";
		GotoXY(30, 11); cout << "++";
		GotoXY(30, 12); cout << "++";
		GotoXY(30, 13); cout << "++";
		GotoXY(30, 14); cout << "++";
		GotoXY(30, 15); cout << "++";
		GotoXY(30, 16); cout << "++";
		GotoXY(30, 17); cout << "++";
		GotoXY(30, 18); cout << "++";
		GotoXY(30, 19); cout << "++";

		break;
	case 5:
		SetColor(LightCyan, Black);
		GotoXY(28, 9); cout << "++";
		GotoXY(26, 9); cout << "++";
		GotoXY(30, 9); cout << "++";
		GotoXY(30, 14); cout << "++";
		GotoXY(27, 13); cout << "++";
		GotoXY(28, 13); cout << "++";
		GotoXY(25, 14); cout << "++";
		GotoXY(24, 15); cout << "++";
		GotoXY(24, 14); cout << "++";
		GotoXY(24, 13); cout << "++";
		GotoXY(24, 12); cout << "++";
		GotoXY(24, 11); cout << "++";
		GotoXY(24, 10); cout << "++";
		GotoXY(24, 9); cout << "++";
		GotoXY(31, 15); cout << "++";
		GotoXY(31, 16); cout << "++";
		GotoXY(31, 17); cout << "++";
		GotoXY(30, 18); cout << "++";
		GotoXY(28, 19); cout << "++";
		GotoXY(26, 19); cout << "++";
		GotoXY(24, 18); cout << "++";

		break;
	case 6:
		SetColor(LightGreen, Black);
		GotoXY(28, 9); cout << "++";
		GotoXY(26, 9); cout << "++";
		GotoXY(24, 10); cout << "++";
		GotoXY(23, 11); cout << "++";
		GotoXY(30, 10); cout << "++";
		GotoXY(28, 13); cout << "++";
		GotoXY(26, 13); cout << "++";
		GotoXY(24, 14); cout << "++";
		GotoXY(30, 14); cout << "++";
		GotoXY(31, 15); cout << "++";
		GotoXY(31, 16); cout << "++";
		GotoXY(31, 17); cout << "++";
		GotoXY(30, 18); cout << "++";
		GotoXY(28, 19); cout << "++";
		GotoXY(26, 19); cout << "++";
		GotoXY(24, 18); cout << "++";
		GotoXY(23, 12); cout << "++";
		GotoXY(23, 13); cout << "++";
		GotoXY(23, 14); cout << "++";
		GotoXY(23, 15); cout << "++";
		GotoXY(23, 16); cout << "++";
		GotoXY(23, 17); cout << "++";

		break;
	case 7:
		SetColor(Yellow, Black);
		GotoXY(29, 9); cout << "++";
		GotoXY(27, 9); cout << "++";
		GotoXY(25, 9); cout << "++";
		GotoXY(24, 9); cout << "++";
		GotoXY(24, 10); cout << "++";
		GotoXY(31, 9); cout << "++";
		GotoXY(31, 10); cout << "++";
		GotoXY(30, 11); cout << "++";
		GotoXY(29, 12); cout << "++";
		GotoXY(28, 13); cout << "++";
		GotoXY(27, 14); cout << "++";
		GotoXY(27, 15); cout << "++";
		GotoXY(27, 16); cout << "++";
		GotoXY(27, 17); cout << "++";
		GotoXY(27, 18); cout << "++";
		GotoXY(27, 19); cout << "++";

		break;
	case 8:
		SetColor(LightGreen, Black);
		GotoXY(28, 9); cout << "++";
		GotoXY(26, 9); cout << "++";
		GotoXY(24, 10); cout << "++";
		GotoXY(23, 11); cout << "++";
		GotoXY(30, 10); cout << "++";
		GotoXY(31, 11); cout << "++";
		GotoXY(31, 12); cout << "++";
		GotoXY(30, 13); cout << "++";
		GotoXY(29, 14); cout << "++";
		GotoXY(27, 14); cout << "++";
		GotoXY(30, 15); cout << "++";
		GotoXY(31, 16); cout << "++";
		GotoXY(31, 17); cout << "++";
		GotoXY(30, 18); cout << "++";
		GotoXY(28, 19); cout << "++";
		GotoXY(26, 19); cout << "++";
		GotoXY(24, 18); cout << "++";
		GotoXY(23, 12); cout << "++";
		GotoXY(24, 13); cout << "++";
		GotoXY(25, 14); cout << "++";
		GotoXY(24, 15); cout << "++";
		GotoXY(23, 16); cout << "++";
		GotoXY(23, 17); cout << "++";

		break;
	case 9:
		SetColor(LightCyan, Black);
		GotoXY(28, 9); cout << "++";
		GotoXY(26, 9); cout << "++";
		GotoXY(24, 10); cout << "++";
		GotoXY(23, 11); cout << "++";
		GotoXY(30, 10); cout << "++";
		GotoXY(31, 11); cout << "++";
		GotoXY(31, 12); cout << "++";
		GotoXY(31, 13); cout << "++";
		GotoXY(30, 13); cout << "++";
		GotoXY(31, 14); cout << "++";
		GotoXY(31, 14); cout << "++";
		GotoXY(31, 15); cout << "++";
		GotoXY(31, 16); cout << "++";
		GotoXY(31, 17); cout << "++";
		GotoXY(30, 18); cout << "++";
		GotoXY(28, 19); cout << "++";
		GotoXY(26, 19); cout << "++";
		GotoXY(24, 18); cout << "++";
		GotoXY(23, 12); cout << "++";
		GotoXY(24, 13); cout << "++";
		GotoXY(26, 14); cout << "++";
		GotoXY(28, 14); cout << "++";

		break;
	default:
		break;
	}
	switch (GetC())
	{
	case 0:
		SetColor(Yellow, Black);
		GotoXY(41, 9); cout << "++";
		GotoXY(39, 9); cout << "++";
		GotoXY(37, 10); cout << "++";
		GotoXY(36, 11); cout << "++";
		GotoXY(43, 10); cout << "++";
		GotoXY(44, 11); cout << "++";
		GotoXY(44, 12); cout << "++";
		GotoXY(44, 13); cout << "++";
		GotoXY(44, 14); cout << "++";
		GotoXY(44, 15); cout << "++";
		GotoXY(44, 16); cout << "++";
		GotoXY(44, 17); cout << "++";
		GotoXY(43, 18); cout << "++";
		GotoXY(41, 19); cout << "++";
		GotoXY(39, 19); cout << "++";
		GotoXY(37, 18); cout << "++";
		GotoXY(36, 12); cout << "++";
		GotoXY(36, 13); cout << "++";
		GotoXY(36, 14); cout << "++";
		GotoXY(36, 15); cout << "++";
		GotoXY(36, 16); cout << "++";
		GotoXY(36, 17); cout << "++";

		break;
	case 1:
		SetColor(White, Black);
		GotoXY(40, 9); cout << "++";
		GotoXY(39, 10); cout << "++";
		GotoXY(38, 11); cout << "++";
		GotoXY(37, 12); cout << "++";
		GotoXY(36, 13); cout << "++";
		GotoXY(41, 9); cout << "++";
		GotoXY(41, 10); cout << "++";
		GotoXY(41, 11); cout << "++";
		GotoXY(41, 12); cout << "++";
		GotoXY(41, 13); cout << "++";
		GotoXY(41, 14); cout << "++";
		GotoXY(41, 15); cout << "++";
		GotoXY(41, 16); cout << "++";
		GotoXY(41, 17); cout << "++";
		GotoXY(41, 18); cout << "++";
		GotoXY(41, 19); cout << "++";

		break;
	case 2:
		SetColor(LightBlue, Black);
		GotoXY(41, 9); cout << "++";
		GotoXY(39, 9); cout << "++";
		GotoXY(37, 10); cout << "++";
		GotoXY(36, 11); cout << "++";
		GotoXY(43, 10); cout << "++";
		GotoXY(43, 11); cout << "++";
		GotoXY(43, 12); cout << "++";
		GotoXY(42, 13); cout << "++";
		GotoXY(41, 14); cout << "++";
		GotoXY(40, 15); cout << "++";
		GotoXY(39, 16); cout << "++";
		GotoXY(38, 17); cout << "++";
		GotoXY(37, 18); cout << "++";
		GotoXY(43, 18); cout << "++";
		GotoXY(36, 19); cout << "++";
		GotoXY(38, 19); cout << "++";
		GotoXY(40, 19); cout << "++";
		GotoXY(42, 19); cout << "++";
		GotoXY(43, 19); cout << "++";

		break;
	case 3:
		SetColor(LightMagenta, Black);
		GotoXY(41, 9); cout << "++";
		GotoXY(39, 9); cout << "++";
		GotoXY(37, 10); cout << "++";
		GotoXY(43, 10); cout << "++";
		GotoXY(44, 11); cout << "++";
		GotoXY(44, 12); cout << "++";
		GotoXY(43, 13); cout << "++";
		GotoXY(42, 14); cout << "++";
		GotoXY(41, 14); cout << "++";
		GotoXY(43, 15); cout << "++";
		GotoXY(44, 16); cout << "++";
		GotoXY(44, 17); cout << "++";
		GotoXY(43, 18); cout << "++";
		GotoXY(41, 19); cout << "++";
		GotoXY(39, 19); cout << "++";
		GotoXY(37, 18); cout << "++";

		break;
	case 4:
		SetColor(LightRed, Black);
		GotoXY(38, 9); cout << "++";
		GotoXY(38, 10); cout << "++";
		GotoXY(38, 11); cout << "++";
		GotoXY(38, 12); cout << "++";
		GotoXY(38, 13); cout << "++";
		GotoXY(40, 13); cout << "++";
		GotoXY(42, 13); cout << "++";
		GotoXY(38, 14); cout << "++";
		GotoXY(40, 14); cout << "++";
		GotoXY(42, 14); cout << "++";
		GotoXY(44, 9); cout << "++";
		GotoXY(44, 10); cout << "++";
		GotoXY(44, 11); cout << "++";
		GotoXY(44, 12); cout << "++";
		GotoXY(44, 13); cout << "++";
		GotoXY(44, 14); cout << "++";
		GotoXY(44, 15); cout << "++";
		GotoXY(44, 16); cout << "++";
		GotoXY(44, 17); cout << "++";
		GotoXY(44, 18); cout << "++";
		GotoXY(44, 19); cout << "++";

		break;
	case 5:
		SetColor(LightCyan, Black);
		GotoXY(41, 9); cout << "++";
		GotoXY(39, 9); cout << "++";
		GotoXY(43, 9); cout << "++";
		GotoXY(42, 14); cout << "++";
		GotoXY(40, 14); cout << "++";
		GotoXY(38, 14); cout << "++";
		GotoXY(38, 15); cout << "++";
		GotoXY(37, 15); cout << "++";
		GotoXY(37, 14); cout << "++";
		GotoXY(37, 13); cout << "++";
		GotoXY(37, 12); cout << "++";
		GotoXY(37, 11); cout << "++";
		GotoXY(37, 10); cout << "++";
		GotoXY(37, 9); cout << "++";
		GotoXY(43, 15); cout << "++";
		GotoXY(44, 16); cout << "++";
		GotoXY(44, 17); cout << "++";
		GotoXY(43, 18); cout << "++";
		GotoXY(41, 19); cout << "++";
		GotoXY(39, 19); cout << "++";
		GotoXY(37, 18); cout << "++";

		break;
	case 6:
		SetColor(LightGreen, Black);
		GotoXY(41, 9); cout << "++";
		GotoXY(39, 9); cout << "++";
		GotoXY(37, 10); cout << "++";
		GotoXY(36, 11); cout << "++";
		GotoXY(43, 10); cout << "++";
		GotoXY(41, 13); cout << "++";
		GotoXY(39, 13); cout << "++";
		GotoXY(37, 14); cout << "++";
		GotoXY(43, 14); cout << "++";
		GotoXY(44, 15); cout << "++";
		GotoXY(44, 16); cout << "++";
		GotoXY(44, 17); cout << "++";
		GotoXY(43, 18); cout << "++";
		GotoXY(41, 19); cout << "++";
		GotoXY(39, 19); cout << "++";
		GotoXY(37, 18); cout << "++";
		GotoXY(36, 12); cout << "++";
		GotoXY(36, 13); cout << "++";
		GotoXY(36, 14); cout << "++";
		GotoXY(36, 15); cout << "++";
		GotoXY(36, 16); cout << "++";
		GotoXY(36, 17); cout << "++";

		break;
	case 7:
		SetColor(Yellow, Black);
		GotoXY(41, 9); cout << "++";
		GotoXY(39, 9); cout << "++";
		GotoXY(37, 9); cout << "++";
		GotoXY(36, 9); cout << "++";
		GotoXY(36, 10); cout << "++";
		GotoXY(43, 9); cout << "++";
		GotoXY(43, 10); cout << "++";
		GotoXY(42, 11); cout << "++";
		GotoXY(41, 12); cout << "++";
		GotoXY(40, 13); cout << "++";
		GotoXY(39, 14); cout << "++";
		GotoXY(39, 15); cout << "++";
		GotoXY(39, 16); cout << "++";
		GotoXY(39, 17); cout << "++";
		GotoXY(39, 18); cout << "++";
		GotoXY(39, 19); cout << "++";

		break;
	case 8:
		SetColor(LightGreen, Black);
		GotoXY(41, 9); cout << "++";
		GotoXY(39, 9); cout << "++";
		GotoXY(37, 10); cout << "++";
		GotoXY(36, 11); cout << "++";
		GotoXY(43, 10); cout << "++";
		GotoXY(44, 11); cout << "++";
		GotoXY(44, 12); cout << "++";
		GotoXY(43, 13); cout << "++";
		GotoXY(42, 14); cout << "++";
		GotoXY(40, 14); cout << "++";
		GotoXY(43, 15); cout << "++";
		GotoXY(44, 16); cout << "++";
		GotoXY(44, 17); cout << "++";
		GotoXY(43, 18); cout << "++";
		GotoXY(41, 19); cout << "++";
		GotoXY(39, 19); cout << "++";
		GotoXY(37, 18); cout << "++";
		GotoXY(36, 12); cout << "++";
		GotoXY(37, 13); cout << "++";
		GotoXY(38, 14); cout << "++";
		GotoXY(37, 15); cout << "++";
		GotoXY(36, 16); cout << "++";
		GotoXY(36, 17); cout << "++";

		break;
	case 9:
		SetColor(LightCyan, Black);
		GotoXY(41, 9); cout << "++";
		GotoXY(39, 9); cout << "++";
		GotoXY(37, 10); cout << "++";
		GotoXY(36, 11); cout << "++";
		GotoXY(43, 10); cout << "++";
		GotoXY(44, 11); cout << "++";
		GotoXY(44, 12); cout << "++";
		GotoXY(44, 13); cout << "++";
		GotoXY(43, 13); cout << "++";
		GotoXY(44, 14); cout << "++";
		GotoXY(44, 14); cout << "++";
		GotoXY(44, 15); cout << "++";
		GotoXY(44, 16); cout << "++";
		GotoXY(44, 17); cout << "++";
		GotoXY(43, 18); cout << "++";
		GotoXY(41, 19); cout << "++";
		GotoXY(39, 19); cout << "++";
		GotoXY(37, 18); cout << "++";
		GotoXY(36, 12); cout << "++";
		GotoXY(37, 13); cout << "++";
		GotoXY(39, 14); cout << "++";
		GotoXY(41, 14); cout << "++";

		break;
	default:
		break;
	}
}

class Game : public Chusla {
protected:
	int cash;
	int stavka;
	int vygrash;
	int count;

public:
	bool game_play = 0;

	Game() : cash(1000), stavka(1), vygrash(0), count(0), game_play(0) {}

	~Game() {}

	bool SetStavka(int st) {
		this->stavka = st;
		return 1;
	}

	int GetCash() { return this->cash; }
	int GetStavka() { return this->stavka; }
	int GetVugrash() { return this->vygrash; }
	int GetCount() { return this->count; }

	void logic();
	void drawconsol();
	void input();
	void menu();

	friend ostream& operator <<(ostream& os, const Game& g);
	friend istream& operator >>(istream& is, Game& g);

	bool SaveGame();
	bool LoadGame();
};

void Game::logic() {

	if (a == b && b == c) {
		vygrash = stavka * 6;
		cash += vygrash;
		Sleep(300);
	}
	else if (a == b || b == c) {
		vygrash = stavka * 3;
		cash += vygrash;
		Sleep(100);
	}
	else
		vygrash = 0;
}

void Game::drawconsol() {	//  Ф-ція виводу меню - консолі по координатам...
	system("title ONE-HANDED BANDIT by Alex");

	cout << flush;

	SetColor(LightCyan, Black);	//   Задаємо колір тексту і консолі...
	GotoXY(18, 5); cout << "ОДНОРУКИЙ БАНДИТ by Alex." << endl;		//  Хто виконав завдання...
	GotoXY(50, 5); cout << "You cash: " << GetCash() << " Грн))" << endl;	 // Твої гроші...
	GotoXY(50, 6); cout << "Stavka: " << GetStavka() << endl;		// Ставка...
	GotoXY(50, 7); cout << "Vugrash: " << GetVugrash() << endl;	 // Твій виграш...
	GotoXY(50, 8); cout << "Count Sprob: " << GetCount() << endl;	// Скільки ставок зроблено.

	SetColor(Yellow, Black);
	GotoXY(50, 11); cout << "Space - запустити барабан" << endl;
	GotoXY(50, 12); cout << "Up - Зберегти результат" << endl;
	GotoXY(50, 13); cout << "Down - Загрузити гру" << endl;
	GotoXY(50, 14); cout << "x - змiнити ставку ( 1 - 50 )" << endl;
	GotoXY(50, 15); cout << "Esc - Exit Game" << endl;

	GotoXY(50, 18); cout << "Winner, якщо набереш 5000 грн" << endl;

	SetColor(LightMagenta, Black);			//   Задаємо колір тексту і консолі...
	GotoXY(8, 8);					// Задаємо координати для друку в консолі  Верхнього рядка межі карти...
	for (int i = 0; i < 40; i++)
		cout << "*";
	GotoXY(8, 20);				// Задаємо координати для друку в консолі нижнього рядка межі карти...
	for (int i = 0; i < 40; i++)
		cout << "*";
	GotoXY(8, 9); cout << "*" << endl;		// Задаємо координати для друку в консолі бокових рядків межі карти...
	GotoXY(8, 10); cout << "*" << endl;
	GotoXY(8, 11); cout << "*" << endl;
	GotoXY(8, 12); cout << "*" << endl;
	GotoXY(8, 13); cout << "*" << endl;
	GotoXY(8, 14); cout << "*" << endl;
	GotoXY(8, 15); cout << "*" << endl;
	GotoXY(8, 16); cout << "*" << endl;
	GotoXY(8, 17); cout << "*" << endl;
	GotoXY(8, 18); cout << "*" << endl;
	GotoXY(8, 19); cout << "*" << endl;
	GotoXY(8, 20); cout << "*" << endl;

	GotoXY(47, 9); cout << "*" << endl;
	GotoXY(47, 10); cout << "*" << endl;
	GotoXY(47, 11); cout << "*" << endl;
	GotoXY(47, 12); cout << "*" << endl;
	GotoXY(47, 13); cout << "*" << endl;
	GotoXY(47, 14); cout << "*" << endl;
	GotoXY(47, 15); cout << "*" << endl;
	GotoXY(47, 16); cout << "*" << endl;
	GotoXY(47, 17); cout << "*" << endl;
	GotoXY(47, 18); cout << "*" << endl;
	GotoXY(47, 19); cout << "*" << endl;
	GotoXY(47, 20); cout << "*" << endl;

	/*
	SetColor(LightCyan, Black);
	GotoXY(25, 13); cout << GetA();
	GotoXY(29, 13); cout << GetB();
	GotoXY(33, 13); cout << GetC();

	SetColor(LightGreen, Black);
	GotoXY(23, 12);
	for (int i = 0; i < 13; i++) {
		cout << "=";
	}
	GotoXY(23, 13); cout << "|";
	GotoXY(27, 13); cout << "|";
	GotoXY(31, 13); cout << "|";
	GotoXY(35, 13); cout << "|";

	GotoXY(23, 14);
	for (int i = 0; i < 13; i++) {
		cout << "=";
	}
	*/


	SetColor(LightCyan, Black);
	GotoXY(21, 11); cout << "|";
	GotoXY(21, 12); cout << "|";
	GotoXY(21, 13); cout << "|";
	GotoXY(21, 14); cout << "|";
	GotoXY(21, 15); cout << "|";
	GotoXY(21, 16); cout << "|";
	GotoXY(21, 17); cout << "|";
	GotoXY(34, 11); cout << "|";
	GotoXY(34, 12); cout << "|";
	GotoXY(34, 13); cout << "|";
	GotoXY(34, 14); cout << "|";
	GotoXY(34, 15); cout << "|";
	GotoXY(34, 16); cout << "|";
	GotoXY(34, 17); cout << "|";

	SetColor(LightCyan, Black);
	GotoXY(18, 22); cout << "Press Space for Play." << endl;

	cout << endl << endl;

	if (GetCash() <= 0) {
		SetColor(Black, Black);
		system("cls");
		SetColor(LightCyan, Black);
		GotoXY(30, 6); cout << "A-XA-XA, I got you Money" << endl;
		GotoXY(30, 8); cout << "You have cash : ZERO " << endl;
		SetColor(Yellow, Black);
		GotoXY(24, 12); cout << "Ти програв, але можеш зiграти ще! \n\n\n\n\n\n\n" << endl;
		Sleep(2000);
		game_play = 0;
		cout << "\n\n\n\n";
	}
	else if (GetCash() >= 5000) {
		cout << flush;
		SetColor(Black, Black);
		system("cls");
		SetColor(LightCyan, Black);
		GotoXY(30, 6); cout << "WOW WOW WOW " << endl;
		GotoXY(30, 8); cout << "You have cash : " << GetCash() << endl;
		SetColor(Yellow, Black);
		GotoXY(25, 12); cout << " Ти виграв, Unbelievable :)\n\n\n\n\n\n\n\n" << endl;

		game_play = 0;
		Sleep(2000);
		cout << "\n\n\n\n";
	}

}

void Game::input() {

	if (_kbhit()) {
		switch (_getch())
		{
		case 32:
			cout << "\a";
			system("cls");
			SetABC(rand() % 9, rand() % 9, rand() % 9);
			cash -= stavka;
			count++;

			break;
		case 27:
			cout << "Exit Game" << endl;
			exit(0);
			game_play = 0;
			break;
		case 88:
			int s;
			do {
				cout << "Введiть розмiр ставки :";
				cin >> s;
				if (s < 1 || s > 50)
					cout << "Stavka NO Valid" << endl;
			} while (s < 1 || s > 50);
			SetStavka(s);
			break;
		case 120:
			int s1;
			do {
				cout << "Введiть розмiр ставки :";
				cin >> s1;
				if (s1 < 1 || s1 > 50)
					cout << "Stavka NO Valid" << endl;
			} while (s1 < 1 || s1 > 50);
			SetStavka(s1);
			break;
		case 72:
			if (SaveGame())
				cout << "Game Saved." << endl;
			else
				cout << "Error Save file." << endl;
			break;
		case 80:
			if (LoadGame())
				cout << "Load Game." << endl;
			else
				cout << "Error Load file." << endl;
			break;
		default:
			break;
		}
	}
}

void Game::menu() {

	SetColor(LightGreen, Black);
	GotoXY(20, 5); cout << "ONE - HANDED BANDIT by Alex" << endl;
	SetColor(LightCyan, Black);
	GotoXY(25, 8); cout << "Головне меню: " << endl;
	GotoXY(25, 10); cout << "1 - Почати гру. " << endl;
	GotoXY(25, 11); cout << "2 - Загрузити гру." << endl;
	GotoXY(25, 12); cout << "3 - Exit Game." << endl;
	GotoXY(20, 15); cout << "Press number in MENU - ";

	cout << flush;
	char choice = _getch();
	cout << flush;
	switch (choice)
	{
	case '1':
		system("cls");
		game_play = 1;

		while (game_play) {
			drawconsol();
			input();
			drawNumber();
			logic();
			cout << flush;
		}
		break;
	case '2':
		if (LoadGame()) {
			cout << "Load Game." << endl;
			system("cls");
			game_play = 1;

			while (game_play) {
				drawconsol();
				input();
				drawNumber();
				logic();
				cout << flush;
			}
		}
		else
			cout << "Error Load file." << endl;
		break;
	case '3':
		cout << "\n\nExit !\n\n" << endl;
		exit(0);
	default:
		break;
	}
}

ostream& operator <<(ostream& os, const Game& g) {
	os << g.cash;
	return os;
}
istream& operator >>(istream& is, Game& g) {
	is >> g.cash;
	return is;
}

bool Game::SaveGame() {
	fstream fs;
	fs.open("Save.txt", fstream::in | fstream::out | fstream::trunc);

	if (!fs.is_open()) {
		return 0;
	}
	else {
		fs << GetCash();
		return 1;
	}
}

bool Game::LoadGame() {
	fstream fs2;
	fs2.open("Save.txt", fstream::in | fstream::out);

	if (!fs2.is_open()) {
		return 0;
	}
	else {
		fs2 >> cash;
		if (cash < 1 || cash > 5000) {
			return 0;
		}
		return 1;
	}
}

int main()
{
	setlocale(LC_ALL, "ukr");
	srand(time(0));

	myConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	Game igra;
	igra.menu();
	cout << flush; // Очистка буфера потоку.

	return 0;
}