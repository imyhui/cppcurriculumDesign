#include "control.h"
void control::showinformation()            //��ʾ����ְ����Ϣ
{
	system("cls");
	gotoxy(25,5);
        cout<<"*************************��ʾ����ְ����Ϣ**************************"<<endl;
    employee* p1=head;                //��ʼ��a
    if(p1==NULL)
    {
        cout<<"\n\n\t\t\t\t\t\tϵͳ������Ϣ,��¼��!\n\n"<<endl;
    }
    while(p1!=NULL)
    {
        cout<<*p1<<endl;
        p1=p1->next;
    }
        cout<<"\t\t\t***********************�������������������************************"<<endl;
	getch();
}
