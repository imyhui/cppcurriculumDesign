#include "control.h"
void control::tongjiformation()
{

    employee *p1=NULL,*p2=NULL;
    p1=head;
    if(p1==NULL)
    {
    	gotoxy(38,20);
        cout<<"  ϵͳ������Ϣ,��¼����Ϣ!"<<endl;
        Sleep(1500); 
        return;
    }
    int i;                 //ѡ�����
    do
    {
    	system("cls");
    	gotoxy(25,5);
        cout<<"==================================================================="<<endl;
        cout<<"\t\t\t|                                                                 |"<<endl;
        cout<<"\t\t\t|                            ��ѡ��ͳ�Ʋ���                       |"<<endl;
        cout<<"\t\t\t|               1�������Ա�                 2������ְ��           |"<<endl;
        cout<<"\t\t\t|               3��������                   4�������ϼ��˵�       |"<<endl;
        cout<<"\t\t\t|                                                                 |"<<endl;
        cout<<"\t\t\t|                             ��ѡ����Ӧ���:                     |"<<endl;
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
			cout<<"========================�����������������========================="<<endl;
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
                cout<<"\t\t\t|   ��ѡ��:                                          |"<<endl;
                cout<<"\t\t\t|          1����Ա��           2��ŮԱ��             |"<<endl;
                cout<<"\t\t\t|                 0�������ϼ��˵�                    |"<<endl;
                cout<<"\t\t\t|                                                    |"<<endl;
                cout<<"\t\t\t|                 ��ѡ����Ӧ���:                    |"<<endl;
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
					cout<<"========================�����������������========================="<<endl;
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
                    cout<<"\t\t\t��ְ����Ϊ:"<<employee::manNum<<endl;
                    getch();
                    break;
                case 2:
                    cout<<"\t\t\tŮְ����Ϊ:"<<employee::womanNum<<endl;
                    getch();
                    break;
                case 0:
                    break;
                default:
                    cout<<"\t\t\t�������"<<endl;
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
                cout<<"\t\t\t|      ��ѡ��:                                                |"<<endl;
                cout<<"\t\t\t|               1������                 2��������Ա           |"<<endl;
                cout<<"\t\t\t|               3��������Ա             4�����۾���           |"<<endl;
                cout<<"\t\t\t|                          0�������ϼ��˵�                    |"<<endl;
                cout<<"\t\t\t|                                                             |"<<endl;
                cout<<"\t\t\t|                             ��ѡ����Ӧ���:                 |"<<endl;
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
					cout<<"========================�����������������========================="<<endl;
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
                    cout<<"\t\t\t��������Ϊ: "<<employee::managerNum<<endl;
                    getch();
                    break;
                case 2:
                    cout<<"\t\t\t������Ա����Ϊ: "<<employee::technicianNum<<endl;
                    getch();
                    break;
                case 3:
                    cout<<"\t\t\t������Ա����Ϊ: "<<employee::salesmanNum<<endl;
                    getch();
                    break;
                case 4:
                    cout<<"\t\t\t���۾�������Ϊ: "<<employee::salesmanagerNum<<endl;
                    getch();
                    break;
                case 0:
                    break;
                default:
                    cout<<"\t\t\t�������"<<endl;
                }
            }
            while(k!=0);
        }
        break;
        case 3:
            cout<<"\n\t\t\t\t\t\t��Ա����Ϊ��"<<employee::employeeNum<<endl;
            getch();
            break;
        case 4:
            break;
        default:
            cout<<"\t\t\t�������"<<endl;
        }
    }
    while(i!=4);
}
