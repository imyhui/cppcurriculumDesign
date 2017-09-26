#include "control.h"
void control::countinformation()
{
    employee*p1=NULL,*p2=NULL;
    if(head==NULL)
    {
    	gotoxy(38,20);
        cout<<"系统暂无信息,无法计算,请录入信息!"<<endl;
        Sleep(1500);
        return;
    }
    int i;                     //选择变量
    do
    {
    	system("cls");
    	gotoxy(25,5);
        cout<<"==================================================================="<<endl;
        cout<<"\t\t\t|                                                                 |"<<endl;
        cout<<"\t\t\t|               1、按照编号         2、按照姓名                   |"<<endl;
        cout<<"\t\t\t|                      0、返回上级菜单                            |"<<endl;
        cout<<"\t\t\t|                          请选择相应编号:                        |"<<endl;
        cout<<"\t\t\t==================================================================="<<endl;
        while(1)
        {
            char temp[100];
             gotoxy(68,9);
			cin>>temp;
            i=temp[0]-48;
            if(i>2||i<0)
             {
            gotoxy(25,15);
			cout<<"========================输入错误请重新输入========================="<<endl;
			Sleep(2000);
			gotoxy(25,15);
			cout<<"                                                                   "<<endl;
			}
            else break;
        }
        gotoxy(30,15);
        switch (i)
        {
        case 1:
        {
            int num;
            cout<<"\t\t编号:";
            cin>>num;
            p1=head;
            while(p1!=NULL)
            {
                if(p1->num==num)
                    break;
                else
                {
                    p2=p1;
                    p1=p1->next;

                }
            }
            if(p1!=NULL)                          //若找到结点
            {
                cout<<"\t\t\t实际工资为:";
                p1->money();
                getch();
            }
            else
                cout<<"\t\t该职工信息不存在!"<<endl;
                Sleep(1500);
        }
        break;
        case 2:
        {
            char name[20];
            cout<<"\t\t姓名:";
            cin>>name;
            p1=head;
            while (p1!=NULL)
            {
                if (strcmp(p1->name,name)==0)
				break;
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
            if (p1!=NULL)              //若找到结点
            {
                cout<<"\t\t\t实际工资为:";
                p1->money();
                getch();
            }
            else
                cout<<"\t\t\t\t\t信息查询失败!"<<endl;
                Sleep(1500);
        }
        break;
        case 0:return;
        }
    }
    while(i!=0);
}
