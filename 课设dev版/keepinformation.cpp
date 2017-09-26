#include "control.h"
void control::keepinformation()                //保存员工信息
{
    employee* p=head;
    if(p==NULL)
    {
    	gotoxy(38,20);
        cout<<" 系统暂无信息,无法保存,请录入信息!"<<endl;
        Sleep(1500);
        return;
    }
    ofstream outfile("employee1.txt",ios::out);
    if(!outfile)
    {
        cerr<<"Open error!"<<endl;
		abort();//
		Sleep(1500);
    }
    while(p!=NULL)
    {
		outfile<<p->level<<" "<<p->num<<" "<<p->name<<" "<<p->sex<<" "<<p->department<<" "<<p->job<<" ";
        if(p->level==1)
        {
            outfile<<p->basicMoney/*<<" "<<p->getjibie()*/;
        }
        else if(p->level==2)
        {
            outfile<<p->/*Get*/salesAmount/*()*/;
        }
        else if(p->level==3)
        {
            outfile<<p->/*get*/workHour/*()*/;
        }
        else if(p->level==4)
        {
            outfile<<p->basicMoney<</*" "<<p->getjibie()<<*/" "<<p->/*Get*/salesAmount/*()*/;
        }
        outfile<<endl;
        p=p->next;

    }
    outfile<<"0"<<endl;
    outfile.close();
    cout<<"\n\t\t\t*************************保存信息成功**************************"<<endl;
    Sleep(1500);
}
