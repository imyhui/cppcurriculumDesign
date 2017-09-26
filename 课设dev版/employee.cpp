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
    cout<<"\t\t\t\t\t职员基类被析构"<<endl;
}

void employee::input()//输入信息 
{
	int l_x=25,l_y=18;
	gotoxy(l_x,l_y++);
    cout<<"======================请输入职员基本信息:======================"<<endl;
    cout<<"\t\t\t请输入职员编号:";
    num=cinErrorJudge();
    cout<<"\t\t\t请输入职员姓名:";
    cin>>name;
    cout<<"\t\t\t请输入职员性别:（nan/nv）";
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
		cout<<"\t\t\t=====================输入错误请重新输入:======================="<<endl;
		first=0;
		}
    }
    cout<<"\t\t\t请输入职员所属部门:";
    cin>>department;
}

void employee::inputmoney()
{
    cout<<"\t\t\t请输入职员基本工资:"<<endl;
    cin>>basicMoney;
}


static  int display1()
{
    return employee::employeeNum;
}
void employee::display()
{
    cout<<"\t\t\t编号:"<<num<<"  "<<"姓名:"<<name<<"  "<<"性别:"<<sex<<"  "<<"部门:"<<department;
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

