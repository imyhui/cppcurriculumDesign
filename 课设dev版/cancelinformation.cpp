#include "control.h"
void control::cancelinformation()              //ɾ��ְ����Ϣ
{
    employee*p1=NULL,*p2=NULL;
    p1=head;
    if(p1==NULL)
    {
    	gotoxy(38,20);
        cout<<"ϵͳ������Ϣ,�޷�ɾ��,��¼����Ϣ!"<<endl;
		Sleep(1500);
        return;
    }
    int i;    //ѡ�����
    do
    {
        system("cls");
        gotoxy(25,5);
        cout<<"==================================================================="<<endl;
        cout<<"\t\t\t|                                                                 |"<<endl;
        cout<<"\t\t\t|                            ��ѡ��ɾ����ʽ                       |"<<endl;
        cout<<"\t\t\t|               1�����ձ��                 2����������           |"<<endl;
        cout<<"\t\t\t|               3�����ղ���                 4�������ϼ��˵�       |"<<endl;
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
		gotoxy(30,15);
        switch (i)
        {
		
        case 1:
        {
            int num;
            
            cout<<"\t\t���:";
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
            cout<<"\t\t����:";
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
            cout<<"\t\t����:";
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
        if(i!=4)//ɾ�����
        {
            if(p1!=NULL)        //�ҵ����,ɾ��
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
                if(p1==head)   //Ҫɾ���Ľ���ǵ�һ�����
                {
                    head=p1->next;
                    delete p1;
                }
                else            //Ҫɾ���Ľ�㲻�ǵ�һ�����
                {
                    p2->next=p1->next;
                    delete p1;
                }
                cout<<"\t\t\t\t\t��Ϣɾ���ɹ�!"<<endl;
                employee::employeeNum--;
				Sleep(1500);
            }
            else
			{               //δ�ҵ����
                cout<<"\t\t\t\t\t��Ϣɾ��ʧ��!"<<endl;
                Sleep(1500);
            }
        }
    }
    while (i!=4);
}
