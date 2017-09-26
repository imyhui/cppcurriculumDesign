#include "salesmanager.h"
salesmanager::~salesmanager()
{
    cout<<"\t\t\t\t\t销售经理类被析构"<<endl;
}
void salesmanager::inputmoney()
{
	job=4;
    cout<<"\t\t\t请输入职员基本工资，销售额:";
     basicMoney=cinErrorJudge();
	 salesAmount=cinErrorJudge();
    salesmanagerNum++;
}
void salesmanager::display2()
{
    cout<<"职务：销售经理 职员基本工资，销售额:";
    cout<<basicMoney<<" "<<salesAmount<<endl;
}
void salesmanager::money()
{
		CommissionRate=0.4;
          cout<<"\t\t\t该员工的实际工资是:"<<basicMoney+salesAmount*CommissionRate<<endl;
}
istream& operator >>(istream& in,salesmanager& s)
{
    s.input();
    s.inputmoney();
    return in;
}
ostream& operator <<(ostream& out,salesmanager& s){
    s.display();
    s.display2();
    s.money();
    return out;
}

