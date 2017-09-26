#include "control.h"
void control::addinformation()         //添加职工信息
{
    control control1;
    Face face1;
    employee* p=NULL;       //新增结点指针
    int i;             //选择变量
    do
    {
        //添加职工信息菜单
        system("cls");
        int loacatx=25,loacat=5;
        gotoxy(loacatx,loacat++);cout<<"==================================================================="<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                                                                 |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                        请选择增加的员工种类                     |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                                                                 |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|            1、增加经理                 2、增加销售人员          |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|            3、增加技术人员             4、增加销售经理          |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                         5、返回上级菜单                         |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                                                                 |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                          请选择相应编号:                        |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"==================================================================="<<endl; 
        while(1)
        {
            char temp[100];
            gotoxy(67,13);
			cin>>temp;
            i=temp[0]-48;
            if(i>5||i<=0)
			{
			gotoxy(loacatx,15);
			cout<<"========================输入错误请重新输入========================="<<endl;
			Sleep(2000);
			gotoxy(loacatx,15);
			cout<<"                                                                   "<<endl;
			}
            else break;
        }
        switch(i)
        {
        case 1:
            p=new manager(1);
            cin>>*p;
            p->next=NULL;
            break;
        case 2:
            p=new salesman(2);
            cin>>*p;
            p->next=NULL;
            break;
        case 3:
            p=new technician(3);
            cin>>*p;
            p->next=NULL;
            break;
        case 4:
            p=new salesmanager(4);
            cin>>*p;
            p->next=NULL;
            break;
        case 5:
            break;
        }
        if(i!=5)
        {
            if (head!=NULL)              //链表已经存在
            {
                employee* p1=NULL,*p2=NULL;         //指针初始化
               	p1=head;
              	p2=p1;
               	bool flag=true;
            while(p1!=NULL)
            {
                if(p1->num==p->num)
                {
                	cout<<"\t\t\t============================添加重复!==========================="<<endl;
                    Sleep(1500);
                    flag=false;
                    break;
                }
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
			}
				if(flag)
				{
                p2->next=p;                      //连接结点
                cout<<"\t\t\t========================信息添加成功!==========================="<<endl;
                Sleep(1500);
            	}
            	else
            	break;
        	}
            else                            //链表不存在
            {
                head=p;                  //连接结点
                cout<<"\t\t\t========================信息添加成功!==========================="<<endl;
                Sleep(1500);
            }
        }
    }
    while (i!=5);
}
