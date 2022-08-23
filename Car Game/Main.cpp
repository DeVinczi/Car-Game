#include <iostream>
#include <conio.h>
#include <dos.h>
#include <Windows.h>
#include <time.h>

#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 30
#define WIN_WIDTH 70

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

//GLOBAL
int enemyY[3];
int enemyX[3];
int enemyFlag[3];
//CAR IN CONSOLE 
char car[4][4] =
{
	' ','+','+',' ',
	'+','+','+','+',
	' ','+','+',' ',
	'+','+','+','+'
};
int carPos = WIN_WIDTH / 2;
int score = 0;

void gotoxy(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}

int main()
{

}