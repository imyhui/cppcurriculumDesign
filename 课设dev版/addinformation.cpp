#include "control.h"
void control::addinformation()         //���ְ����Ϣ
{
    control control1;
    Face face1;
    employee* p=NULL;       //�������ָ��
    int i;             //ѡ�����
    do
    {
        //���ְ����Ϣ�˵�
        system("cls");
        int loacatx=25,loacat=5;
        gotoxy(loacatx,loacat++);cout<<"==================================================================="<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                                                                 |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                        ��ѡ�����ӵ�Ա������                     |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                                                                 |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|            1�����Ӿ���                 2������������Ա          |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|            3�����Ӽ�����Ա             4���������۾���          |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                         5�������ϼ��˵�                         |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                                                                 |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                          ��ѡ����Ӧ���:                        |"<<endl;
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
			cout<<"========================�����������������========================="<<endl;
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
            if (head!=NULL)              //�����Ѿ�����
            {
                employee* p1=NULL,*p2=NULL;         //ָ���ʼ��
               	p1=head;
              	p2=p1;
               	bool flag=true;
            while(p1!=NULL)
            {
                if(p1->num==p->num)
                {
                	cout<<"\t\t\t============================����ظ�!==========================="<<endl;
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
                p2->next=p;                      //���ӽ��
                cout<<"\t\t\t========================��Ϣ��ӳɹ�!==========================="<<endl;
                Sleep(1500);
            	}
            	else
            	break;
        	}
            else                            //��������
            {
                head=p;                  //���ӽ��
                cout<<"\t\t\t========================��Ϣ��ӳɹ�!==========================="<<endl;
                Sleep(1500);
            }
        }
    }
    while (i!=5);
}
