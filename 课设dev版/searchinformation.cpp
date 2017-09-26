#include "control.h"
void control::searchinformation()               //查询职工信息
{
    employee *p1=NULL,*p2=NULL;
    p1=head;
    if(p1==NULL)
    {
    	gotoxy(38,20);
        cout<<"系统暂无信息,无法查询,请录入信息!"<<endl;
        Sleep(3000);
        return;
    }
    int i;                 //选择变量
    do
    {
    	system("cls");
    	gotoxy(25,5);
        cout<<"==================================================================="<<endl;
        cout<<"\t\t\t|                                                                 |"<<endl;
        cout<<"\t\t\t|                            请选择查询方式                       |"<<endl;
        cout<<"\t\t\t|               1、按照编号                 2、按照姓名           |"<<endl;
        cout<<"\t\t\t|               3、按照部门                 4、按照职务           |"<<endl;
        cout<<"\t\t\t|                            5、返回上级菜单                      |"<<endl;
        cout<<"\t\t\t|                                                                 |"<<endl;
        cout<<"\t\t\t|                             请选择相应编号:                     |"<<endl;
        cout<<"\t\t\t==================================================================="<<endl;
        while(1)
        {
            char temp[100];
            gotoxy(70,12);
			cin>>temp;
            i=temp[0]-48;
            if(i>5||i==0)
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
        switch(i)
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
            if(p1!=NULL)
			{                          //若找到结点
                cout<<"\t\t\t职工信息为:"<<endl<<endl<<(*p1)<<endl;
                getch();
			}
            else
            {
                cout<<"\t\t\t该职工信息不存在!"<<endl;
                Sleep(1500);
            }
        }
        break;
        case 2:
        {
            char name[20];
            cout<<"姓名:";
            cin>>name;
            p1=head;
            while (p1!=NULL)
            {
                if (strcmp(p1->name,name)==0)                     break;
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
            if (p1!=NULL)//若找到结点
			{              
                cout<<(*p1)<<endl;
                getch();
            }
            else
            {
                cout<<"\t\t\t信息查询失败!"<<endl;
                Sleep(1500);
            }
        }
        break;
        case 3:
        {
            char department[20];
            int m=0;
            cout<<"部门:";
            cin>>department;
            p1=head;
            while (p1!=NULL)
            {
                if (strcmp(p1->department,department)==0)
                {
                    cout<<(*p1)<<endl;
                    p2=p1;
                    p1=p1->next;
                    m++;
                }
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
            if (m==0)
            {
                cout<<"\t\t\t信息查询失败!"<<endl;
                Sleep(1500);
        	}
			getch();
        }
        break;
        case 4:
        {
            int job;
            int n=0;
            cout<<"\t\t\t职务:";
            cin>>job;
            p1=head;
            while (p1!=NULL)
            {
                if (p1->job==job)
                {
                    cout<<(*p1)<<endl;
                    p2=p1;
                    p1=p1->next;
                    n++;
                }
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
            if (n==0)
            {
                cout<<"\t\t\t查询失败!"<<endl;
                 Sleep(1500);
            }
            getch();
        }
        break;
        case 5:
            return;
        }
    }
    while (i!=5);
}
