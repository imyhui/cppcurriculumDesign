#include "Face.h"

Face::Face()
{
	SetConsoleTitle("=======================================职工信息管理系统======================================");
	system("color E0");
}

Face::~Face()
{
}

void Face::showSurface(int x,int y,string a)
{
	gotoxy(x,y);
	cout<<a<<endl;
 } 
void Face::progressBar()
{
		const int start_x=30,start_y=7;
	gotoxy(start_x,start_y);
	cout<<"▁▁▁▁▂▃▄▅▆▇█正在载入█▇▆▅▄▃▂▁▁▁▁▁"<<endl;
	gotoxy(start_x,start_y+1);
	cout<<"■■■■■■■■■■■■■■■■■■■■■■■■■■■"<<endl;
	gotoxy(start_x,start_y+2);
	cout<<"■==================================================■"<<endl;
	gotoxy(start_x,start_y+3);
	cout<<"■■■■■■■■■■■■■■■■■■■■■■■■■■■"<<endl;
	gotoxy(start_x+2,start_y+2);
	for(int i=0;i<25;i++)
	{
	cout<<"》";
	Sleep(50); 
	}
	system("cls");
}
