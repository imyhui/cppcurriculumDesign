#include "control.h"
void control::readinformation()                //读入员工信息
{
    int level;               //类标记
    employee *p=NULL;
    ifstream infile("employee1.txt",ios::in);//读取一条记录
    gotoxy(25,18);
    if(!infile)
    {
        cerr<<"Open error!"<<endl;
		abort();
    }
    else
	{
    do 
    {
		infile>>level;
        switch(level)
        {
        case 1:
        {
            p=new manager(1);
            p->level=1;
            infile>>p->num>>p->name>>p->sex>>p->department>>p->job>>p->basicMoney;
        }/*>>p->jibie*/
        break;
        case 2:
        {
            p=new salesman(2);
            p->level=2;
            infile>>p->num>>p->name>>p->sex>>p->department>>p->job>>p->salesAmount;
        }
        break;
        case 3:
        {
            p=new technician(3);
            p->level=3;
            infile>>p->num>>p->name>>p->sex>>p->department>>p->job>>p->workHour;
        }
        break;
        case 4:
        {
            p=new salesmanager(4);
            p->level=4;
            infile>>p->num>>p->name>>p->sex>>p->department>>p->job>>p->basicMoney>>p->salesAmount;
        }/*p->jibie>>*/
        break;
        }
        p->next=NULL;
        if(level!=0)
        {
            if (head!=NULL)              //链表已经存在
            {
				employee* p1=NULL;         //指针初始化
                p1=head;
                while (p1->next!=NULL)     //查找尾结点
                {
                    p1=p1->next;
                }
                p1->next=p;                 //连接结点
                cout<<"\t\t\t信息读入成功!"<<endl;
            }
            else                           //链表不存在
            {
                head=p;                  //连接结点
                cout<<"\t\t\t信息读入成功!"<<endl;
            }
        }
    }while(level!=0); 
    infile.close();
    cout<<"\t\t\t*************************信息读入成功**************************"<<endl;
    Sleep(2000);
    } 
}
