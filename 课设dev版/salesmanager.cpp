#include "salesmanager.h"
salesmanager::~salesmanager()
{
    cout<<"\t\t\t\t\t���۾����౻����"<<endl;
}
void salesmanager::inputmoney()
{
	job=4;
    cout<<"\t\t\t������ְԱ�������ʣ����۶�:";
     basicMoney=cinErrorJudge();
	 salesAmount=cinErrorJudge();
    salesmanagerNum++;
}
void salesmanager::display2()
{
    cout<<"ְ�����۾��� ְԱ�������ʣ����۶�:";
    cout<<basicMoney<<" "<<salesAmount<<endl;
}
void salesmanager::money()
{
		CommissionRate=0.4;
          cout<<"\t\t\t��Ա����ʵ�ʹ�����:"<<basicMoney+salesAmount*CommissionRate<<endl;
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

