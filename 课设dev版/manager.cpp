#include "manager.h"
manager::~manager()
{
    cout<<"\t\t\t\t\t�����౻����"<<endl;
}

void manager::inputmoney()
{
	job=1; 
    cout<<"\t\t\t������ְԱ��������:";
    basicMoney=cinErrorJudge();
    managerNum++;
}

void manager::display2()
{
    cout<<" ְ�񣺾��� ְԱ��������:";
    cout<<basicMoney<<endl;
}
void manager::money()
{
    cout<<"\t\t\t��Ա����ʵ�ʹ�����:"<<basicMoney<<endl;
}
istream& operator >>(istream& in,manager& w)
{
    w.input();
    w.inputmoney();
    return in;
    }
ostream& operator <<(ostream& out,manager& w)
{
    w.display();
    w.display2();
    w.money();
    return out;
}

