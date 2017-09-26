#include "technician.h"
technician::~technician()
{
    cout<<"\t\t\t\t\t技术人员类被析构"<<endl;
}
void technician::inputmoney()
{
	job=3; 
    cout<<"\t\t\t请输入技术人员工作时间:";
    workHour=cinErrorJudge();
    technicianNum++;
}
void technician::display2()
{
    cout<<" 职务：技术人员 职员工作时间：";
    cout<<workHour<<endl;
}
void technician::money()
{
	moneyPerHour=30;
    cout<<"\t\t\t该员工的实际工资是:"<<(moneyPerHour*workHour)<<endl;
}
istream& operator >>(istream& in,technician& w)
{
    w.input();
    w.inputmoney();
    return in;
}
ostream& operator <<(ostream& out,technician& w)
{
    w.display();
    w.display2();
    w.money();
    return out;
   }


