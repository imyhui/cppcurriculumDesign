#include "control.h"
void control::tongjiformation()
{

    employee *p1=NULL,*p2=NULL;
    p1=head;
    if(p1==NULL)
    {
    	gotoxy(38,20);
        cout<<"  系统暂无信息,请录入信息!"<<endl;
        Sleep(1500); 
        return;
    }
    int i;                 //选择变量
    do
    {
    	system("cls");
    	gotoxy(25,5);
        cout<<"==================================================================="<<endl;
        cout<<"\t\t\t|                                                                 |"<<endl;
        cout<<"\t\t\t|                            请选择统计参数                       |"<<endl;
        cout<<"\t\t\t|               1、按照性别                 2、按照职务           |"<<endl;
        cout<<"\t\t\t|               3、总人数                   4、返回上级菜单       |"<<endl;
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
        switch (i)
        {
        case 1:
        {
            int k;
            do
            {
            	system("cls");
            	gotoxy(25,5);
                cout<<"******************************************************"<<endl;
                cout<<"\t\t\t|                                                    |"<<endl;
                cout<<"\t\t\t|   请选择:                                          |"<<endl;
                cout<<"\t\t\t|          1、男员工           2、女员工             |"<<endl;
                cout<<"\t\t\t|                 0、返回上级菜单                    |"<<endl;
                cout<<"\t\t\t|                                                    |"<<endl;
                cout<<"\t\t\t|                 请选择相应编号:                    |"<<endl;
                cout<<"\t\t\t******************************************************"<<endl;
                while(1)
                {
                    char temp[100];
                    gotoxy(58,11);
					cin>>temp;
            		k=temp[0]-48;
                    if(k>2||k<0)
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
                switch (k)
                {
                case 1:
                    cout<<"\t\t\t男职工数为:"<<employee::manNum<<endl;
                    getch();
                    break;
                case 2:
                    cout<<"\t\t\t女职工数为:"<<employee::womanNum<<endl;
                    getch();
                    break;
                case 0:
                    break;
                default:
                    cout<<"\t\t\t输入错误！"<<endl;
                    getch();
                }
            }
            while(k!=0);
        }
        break;
        case 2:
        {
            int k;
            do
            {
            	system("cls");
            	gotoxy(25,5);
                cout<<"***************************************************************"<<endl;
                cout<<"\t\t\t|                                                             |"<<endl;
                cout<<"\t\t\t|      请选择:                                                |"<<endl;
                cout<<"\t\t\t|               1、经理                 2、技术人员           |"<<endl;
                cout<<"\t\t\t|               3、销售人员             4、销售经理           |"<<endl;
                cout<<"\t\t\t|                          0、返回上级菜单                    |"<<endl;
                cout<<"\t\t\t|                                                             |"<<endl;
                cout<<"\t\t\t|                             请选择相应编号:                 |"<<endl;
                cout<<"\t\t\t***************************************************************"<<endl;
                while(1)
                {
                    char temp[100];
                    gotoxy(70,12);
					cin>>temp;
            		k=temp[0]-48;
                    if(k>4||k<0)
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
                switch (k)
                {
                case 1:
                    cout<<"\t\t\t经理人数为: "<<employee::managerNum<<endl;
                    getch();
                    break;
                case 2:
                    cout<<"\t\t\t技术人员人数为: "<<employee::technicianNum<<endl;
                    getch();
                    break;
                case 3:
                    cout<<"\t\t\t销售人员人数为: "<<employee::salesmanNum<<endl;
                    getch();
                    break;
                case 4:
                    cout<<"\t\t\t销售经理人数为: "<<employee::salesmanagerNum<<endl;
                    getch();
                    break;
                case 0:
                    break;
                default:
                    cout<<"\t\t\t输入错误！"<<endl;
                }
            }
            while(k!=0);
        }
        break;
        case 3:
            cout<<"\n\t\t\t\t\t\t总员工数为："<<employee::employeeNum<<endl;
            getch();
            break;
        case 4:
            break;
        default:
            cout<<"\t\t\t输入错误！"<<endl;
        }
    }
    while(i!=4);
}
