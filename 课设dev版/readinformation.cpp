#include "control.h"
void control::readinformation()                //����Ա����Ϣ
{
    int level;               //����
    employee *p=NULL;
    ifstream infile("employee1.txt",ios::in);//��ȡһ����¼
    gotoxy(25,18);
    if(!infile)
    {
        cerr<<"Open error!"<<endl;
		abort();
    }
    else
	{
    do 
    {
		infile>>level;
        switch(level)
        {
        case 1:
        {
            p=new manager(1);
            p->level=1;
            infile>>p->num>>p->name>>p->sex>>p->department>>p->job>>p->basicMoney;
        }/*>>p->jibie*/
        break;
        case 2:
        {
            p=new salesman(2);
            p->level=2;
            infile>>p->num>>p->name>>p->sex>>p->department>>p->job>>p->salesAmount;
        }
        break;
        case 3:
        {
            p=new technician(3);
            p->level=3;
            infile>>p->num>>p->name>>p->sex>>p->department>>p->job>>p->workHour;
        }
        break;
        case 4:
        {
            p=new salesmanager(4);
            p->level=4;
            infile>>p->num>>p->name>>p->sex>>p->department>>p->job>>p->basicMoney>>p->salesAmount;
        }/*p->jibie>>*/
        break;
        }
        p->next=NULL;
        if(level!=0)
        {
            if (head!=NULL)              //�����Ѿ�����
            {
				employee* p1=NULL;         //ָ���ʼ��
                p1=head;
                while (p1->next!=NULL)     //����β���
                {
                    p1=p1->next;
                }
                p1->next=p;                 //���ӽ��
                cout<<"\t\t\t��Ϣ����ɹ�!"<<endl;
            }
            else                           //��������
            {
                head=p;                  //���ӽ��
                cout<<"\t\t\t��Ϣ����ɹ�!"<<endl;
            }
        }
    }while(level!=0); 
    infile.close();
    cout<<"\t\t\t*************************��Ϣ����ɹ�**************************"<<endl;
    Sleep(2000);
    } 
}
