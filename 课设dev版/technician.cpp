#include "technician.h"
technician::~technician()
{
    cout<<"\t\t\t\t\t������Ա�౻����"<<endl;
}
void technician::inputmoney()
{
	job=3; 
    cout<<"\t\t\t�����뼼����Ա����ʱ��:";
    workHour=cinErrorJudge();
    technicianNum++;
}
void technician::display2()
{
    cout<<" ְ�񣺼�����Ա ְԱ����ʱ�䣺";
    cout<<workHour<<endl;
}
void technician::money()
{
	moneyPerHour=30;
    cout<<"\t\t\t��Ա����ʵ�ʹ�����:"<<(moneyPerHour*workHour)<<endl;
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


