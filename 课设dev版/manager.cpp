#include "manager.h"
manager::~manager()
{
    cout<<"\t\t\t\t\t经理类被析构"<<endl;
}

void manager::inputmoney()
{
	job=1; 
    cout<<"\t\t\t请输入职员基本工资:";
    basicMoney=cinErrorJudge();
    managerNum++;
}

void manager::display2()
{
    cout<<" 职务：经理 职员基本工资:";
    cout<<basicMoney<<endl;
}
void manager::money()
{
    cout<<"\t\t\t该员工的实际工资是:"<<basicMoney<<endl;
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

