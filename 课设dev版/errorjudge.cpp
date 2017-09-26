#include<iostream>
using namespace std;
#include <windows.h>
void gotoxy(int x,int y);
int first=0;
extern int cinErrorJudge()
{
		int temp;
		if(first)
		cout<<"\t\t\t";
		//else
		//cout<<"\t";
        cin>>temp;
        try{
            if(cin.fail())  
                throw 1;  
        }  
        catch(int){  
            cin.clear();  
            cin.sync();
            cerr<<"\t\t\t======================请输入一个整数:=========================="<<endl;
            first=1;
            return cinErrorJudge();
        }
        first=0;
        return temp;
}
