#include "control.h"
void control::changeinformation()               //�޸�ְ����Ϣ
{
	
    employee*p1=NULL,*p2=NULL;
    if(head==NULL)
    {
		gotoxy(38,20);
        cout<<"ϵͳ������Ϣ,�޷��޸�,��¼����Ϣ!"<<endl;
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
        cout<<"\t\t\t|               1���޸�����         2���޸Ĳ���                   |"<<endl;
        cout<<"\t\t\t|               3���޸�ְ��         4�������ϼ��˵�               |"<<endl;
        cout<<"\t\t\t|                                                                 |"<<endl;
        cout<<"\t\t\t|                          ��ѡ����Ӧ���:                        |"<<endl;
        cout<<"\t\t\t==================================================================="<<endl;
        while(1)
        {
        	gotoxy(67,10);
            char temp[100];
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
        if(i!=4)
        {
            int num;
            gotoxy(43,15);
            cout<<"�������޸�ְ�����:";
            cin>>num;
            p1=head;
            while(p1!=NULL)
            {
                if(p1->num==num)break;
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
            if(p1!=NULL)
            {
                //���ҵ����
                cout<<"\n\t\t\t���Ϊ"<<num<<"��ְ��ԭ��ϢΪ:"<<endl<<endl<<*p1<<endl;
            }
            else
            {
                cout<<"\t\t\t\t\t  ��ְ����Ϣ������!"<<endl;
                Sleep(1500);
                return;
            }
        } //ִ���޸Ľ��
        switch (i)
        {
        case 1:
        {
            cout<<"\t\t\t�����޸�Ϊ:";
            char newname[20];
            cin>>newname;
            strcpy(p1->name,newname);
        }
        break;
        case 2:
        {
            cout<<"\t\t\t�����޸�Ϊ:";
            char newdepartment[20];
            cin>>newdepartment;
            strcpy(p1->department,newdepartment);
        }
        break;
        case 3:
        {
            cout<<"\t\t\tְ���޸�Ϊ��1������2��������Ա��3��������Ա��4�����۾���):";
            int newjob;
            cin>>newjob;
            	 switch(p1->job)
            	 {
            	 	case 1:employee::managerNum--;break;
            	 	case 2:employee::salesmanNum--;break;
            	 	case 3:employee::technicianNum--;break;
            	 	case 4:employee::salesmanagerNum--;break;            	 		
				 }
				 switch(newjob)
            	 {
            	 	case 1:employee::managerNum++;break;
            	 	case 2:employee::technicianNum++;break;
            	 	case 3:employee::salesmanNum++;break;
            	 	case 4:employee::salesmanagerNum++;break;            	 		
				 }
				 
            p1->job=newjob;
        }
        break;
        case 4:
            return;
        }
        if(p1!=NULL)                          //���ҵ����
            cout<<"\t\t\t�޸ĳɹ���"<<endl;
        cout<<"\t\t\t��ְ�����ڵ���ϢΪ:"<<endl<<endl<<*p1<<endl;
        getch();
    }
    while (i!=4);
}
