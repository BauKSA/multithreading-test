#include<Windows.h>

#include "functions.h"

void gotoxy(int x, int y) {
	HANDLE console_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;
	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(console_handle, coord);
}