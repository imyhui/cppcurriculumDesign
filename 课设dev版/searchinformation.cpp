#include "control.h"
void control::searchinformation()               //��ѯְ����Ϣ
{
    employee *p1=NULL,*p2=NULL;
    p1=head;
    if(p1==NULL)
    {
    	gotoxy(38,20);
        cout<<"ϵͳ������Ϣ,�޷���ѯ,��¼����Ϣ!"<<endl;
        Sleep(3000);
        return;
    }
    int i;                 //ѡ�����
    do
    {
    	system("cls");
    	gotoxy(25,5);
        cout<<"==================================================================="<<endl;
        cout<<"\t\t\t|                                                                 |"<<endl;
        cout<<"\t\t\t|                            ��ѡ���ѯ��ʽ                       |"<<endl;
        cout<<"\t\t\t|               1�����ձ��                 2����������           |"<<endl;
        cout<<"\t\t\t|               3�����ղ���                 4������ְ��           |"<<endl;
        cout<<"\t\t\t|                            5�������ϼ��˵�                      |"<<endl;
        cout<<"\t\t\t|                                                                 |"<<endl;
        cout<<"\t\t\t|                             ��ѡ����Ӧ���:                     |"<<endl;
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
			cout<<"========================�����������������========================="<<endl;
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
            cout<<"\t\t���:";
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
			{                          //���ҵ����
                cout<<"\t\t\tְ����ϢΪ:"<<endl<<endl<<(*p1)<<endl;
                getch();
			}
            else
            {
                cout<<"\t\t\t��ְ����Ϣ������!"<<endl;
                Sleep(1500);
            }
        }
        break;
        case 2:
        {
            char name[20];
            cout<<"����:";
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
            if (p1!=NULL)//���ҵ����
			{              
                cout<<(*p1)<<endl;
                getch();
            }
            else
            {
                cout<<"\t\t\t��Ϣ��ѯʧ��!"<<endl;
                Sleep(1500);
            }
        }
        break;
        case 3:
        {
            char department[20];
            int m=0;
            cout<<"����:";
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
                cout<<"\t\t\t��Ϣ��ѯʧ��!"<<endl;
                Sleep(1500);
        	}
			getch();
        }
        break;
        case 4:
        {
            int job;
            int n=0;
            cout<<"\t\t\tְ��:";
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
                cout<<"\t\t\t��ѯʧ��!"<<endl;
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
