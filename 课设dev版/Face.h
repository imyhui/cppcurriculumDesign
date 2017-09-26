#ifndef FACE_H
#define FACE_H

#include <Windows.h>
#include<conio.h>
#include <iostream>
void gotoxy(int x,int y);
using namespace std;
class Face
{
	public:
		Face(); 
		~Face();
		void progressBar();
		void showSurface(int x,int y,string a);
	protected:
};

#endif
