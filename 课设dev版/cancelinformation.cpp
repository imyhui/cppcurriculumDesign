#include "control.h"
void control::cancelinformation()              //删除职工信息
{
    employee*p1=NULL,*p2=NULL;
    p1=head;
    if(p1==NULL)
    {
    	gotoxy(38,20);
        cout<<"系统暂无信息,无法删除,请录入信息!"<<endl;
		Sleep(1500);
        return;
    }
    int i;    //选择变量
    do
    {
        system("cls");
        gotoxy(25,5);
        cout<<"==================================================================="<<endl;
        cout<<"\t\t\t|                                                                 |"<<endl;
        cout<<"\t\t\t|                            请选择删除方式                       |"<<endl;
        cout<<"\t\t\t|               1、按照编号                 2、按照姓名           |"<<endl;
        cout<<"\t\t\t|               3、按照部门                 4、返回上级菜单       |"<<endl;
        cout<<"\t\t\t|                                                                 |"<<endl;
        cout<<"\t\t\t|                             请选择相应编号:                     |"<<endl;
        cout<<"\t\t\t==================================================================="<<endl;
        while(1)
        {
            char temp[100];
            gotoxy(70,11);
			cin>>temp;
            i=temp[0]-48;
            if(i>4||i==0)
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
            while (p1!=NULL)
            {
                if (p1->num==num)
                    break;
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
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
                if (strcmp(p1->name,name)==0)break;
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
        }
        break;
        case 3:
        {
            char department[20];
            cout<<"\t\t部门:";
            cin>>department;
            p1=head;
            while (p1!=NULL)
            {
                if (strcmp(p1->department,department)==0)
                    break;
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
        }
        break;
        case 4:
            return;
        }
        if(i!=4)//删除结点
        {
            if(p1!=NULL)        //找到结点,删除
            {
            	 if (strcmp(p1->sex,"nan")==0)
            	 employee::manNum--;
            	 else
            	 employee::womanNum--;
            	 switch(p1->job)
            	 {
            	 	case 1:employee::managerNum--;break;
            	 	case 2:employee::salesmanNum--;break;
            	 	case 3:employee::technicianNum--;break;
            	 	case 4:employee::salesmanagerNum--;break;            	 		
				 }
                if(p1==head)   //要删除的结点是第一个结点
                {
                    head=p1->next;
                    delete p1;
                }
                else            //要删除的结点不是第一个结点
                {
                    p2->next=p1->next;
                    delete p1;
                }
                cout<<"\t\t\t\t\t信息删除成功!"<<endl;
                employee::employeeNum--;
				Sleep(1500);
            }
            else
			{               //未找到结点
                cout<<"\t\t\t\t\t信息删除失败!"<<endl;
                Sleep(1500);
            }
        }
    }
    while (i!=4);
}
