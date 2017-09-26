#include "control.h"
void control::showinformation()            //显示所有职工信息
{
	system("cls");
	gotoxy(25,5);
        cout<<"*************************显示所有职工信息**************************"<<endl;
    employee* p1=head;                //初始化a
    if(p1==NULL)
    {
        cout<<"\n\n\t\t\t\t\t\t系统暂无信息,请录入!\n\n"<<endl;
    }
    while(p1!=NULL)
    {
        cout<<*p1<<endl;
        p1=p1->next;
    }
        cout<<"\t\t\t***********************输入任意键返回主界面************************"<<endl;
	getch();
}
