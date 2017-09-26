#include "salesman.h"
salesman::~salesman()
{
    cout<<"\t\t\t\t\t销售人员类被析构"<<endl;
}

void salesman::inputmoney()
{
	job=2;
    cout<<"\t\t\t请输入销售员销售额:";
    salesAmount=cinErrorJudge();
    salesmanNum++;
}
void salesman::display2()
{
    cout<<" 职务：销售人员  职员销售额:";
    cout<<salesAmount<<endl;
}
void salesman::money()
{
	CommissionRate=0.1;
    cout<<"\t\t\t该员工的实际工资是:"<<salesAmount*CommissionRate<<endl;
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

