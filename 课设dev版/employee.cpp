#include "employee.h"
employee::employee()
{
    employeeNum++;
}
employee::employee(int level)
{
    this->level=level;
    employeeNum++;
}
employee::~employee()
{
    cout<<"\t\t\t\t\tְԱ���౻����"<<endl;
}

void employee::input()//������Ϣ 
{
	int l_x=25,l_y=18;
	gotoxy(l_x,l_y++);
    cout<<"======================������ְԱ������Ϣ:======================"<<endl;
    cout<<"\t\t\t������ְԱ���:";
    num=cinErrorJudge();
    cout<<"\t\t\t������ְԱ����:";
    cin>>name;
    cout<<"\t\t\t������ְԱ�Ա�:��nan/nv��";
    int first=1;
    while(1)
    {
    	if(!first)
    	cout<<"\t\t\t";
        cin>>sex;
        if(strcmp(sex,"nan")==0||strcmp(sex,"nv")==0)
        {
            if(strcmp(sex,"nan")==0)
                manNum++;
            else
                womanNum++;
            break;
        }
        else 
        {
		cout<<"\t\t\t=====================�����������������:======================="<<endl;
		first=0;
		}
    }
    cout<<"\t\t\t������ְԱ��������:";
    cin>>department;
}

void employee::inputmoney()
{
    cout<<"\t\t\t������ְԱ��������:"<<endl;
    cin>>basicMoney;
}


static  int display1()
{
    return employee::employeeNum;
}
void employee::display()
{
    cout<<"\t\t\t���:"<<num<<"  "<<"����:"<<name<<"  "<<"�Ա�:"<<sex<<"  "<<"����:"<<department;
}
istream& operator >>(istream& in,employee& w)
{
    w.input();
    w.inputmoney();
    return in;
}
ostream& operator <<(ostream& out,employee& w)
{
    w.display();
    w.display2();
    w.money();
    return out;
}

int employee::employeeNum=0;
int employee::manNum=0;
int employee::womanNum=0;
int employee::managerNum=0;
int employee::salesmanNum=0;
int employee::technicianNum=0;
int employee::salesmanagerNum=0;

