#include <Windows.h>
#include<conio.h>
#include <iostream>
using namespace std;
extern void gotoxy(int x,int y)
{
    COORD pos;
    pos.X=x-1;
    pos.Y=y-1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
