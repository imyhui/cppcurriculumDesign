#include "salesman.h"
salesman::~salesman()
{
    cout<<"\t\t\t\t\t������Ա�౻����"<<endl;
}

void salesman::inputmoney()
{
	job=2;
    cout<<"\t\t\t����������Ա���۶�:";
    salesAmount=cinErrorJudge();
    salesmanNum++;
}
void salesman::display2()
{
    cout<<" ְ��������Ա  ְԱ���۶�:";
    cout<<salesAmount<<endl;
}
void salesman::money()
{
	CommissionRate=0.1;
    cout<<"\t\t\t��Ա����ʵ�ʹ�����:"<<salesAmount*CommissionRate<<endl;
}
istream& operator >>(istream& in,salesman& w)
{
    w.input();
    w.inputmoney();
    return in;
}
ostream& operator <<(ostream& out,salesman& w)
{
    w.display();
    w.display2();
    w.money();
    return out;
}

