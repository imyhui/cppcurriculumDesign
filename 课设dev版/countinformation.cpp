#include "control.h"
void control::countinformation()
{
    employee*p1=NULL,*p2=NULL;
    if(head==NULL)
    {
    	gotoxy(38,20);
        cout<<"ϵͳ������Ϣ,�޷�����,��¼����Ϣ!"<<endl;
        Sleep(1500);
        return;
    }
    int i;                     //ѡ�����
    do
    {
    	system("cls");
    	gotoxy(25,5);
        cout<<"==================================================================="<<endl;
        cout<<"\t\t\t|                                                                 |"<<endl;
        cout<<"\t\t\t|               1�����ձ��         2����������                   |"<<endl;
        cout<<"\t\t\t|                      0�������ϼ��˵�                            |"<<endl;
        cout<<"\t\t\t|                          ��ѡ����Ӧ���:                        |"<<endl;
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
			cout<<"========================�����������������========================="<<endl;
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
            if(p1!=NULL)                          //���ҵ����
            {
                cout<<"\t\t\tʵ�ʹ���Ϊ:";
                p1->money();
                getch();
            }
            else
                cout<<"\t\t��ְ����Ϣ������!"<<endl;
                Sleep(1500);
        }
        break;
        case 2:
        {
            char name[20];
            cout<<"\t\t����:";
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
            if (p1!=NULL)              //���ҵ����
            {
                cout<<"\t\t\tʵ�ʹ���Ϊ:";
                p1->money();
                getch();
            }
            else
                cout<<"\t\t\t\t\t��Ϣ��ѯʧ��!"<<endl;
                Sleep(1500);
        }
        break;
        case 0:return;
        }
    }
    while(i!=0);
}
