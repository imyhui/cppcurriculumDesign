#include "control.h"
void control::changeinformation()               //修改职工信息
{
	
    employee*p1=NULL,*p2=NULL;
    if(head==NULL)
    {
		gotoxy(38,20);
        cout<<"系统暂无信息,无法修改,请录入信息!"<<endl;
        Sleep(1500);
        return;
    }
    int i;                     //选择变量
    do
    {
    	system("cls");
		gotoxy(25,5);
        cout<<"==================================================================="<<endl;
        cout<<"\t\t\t|                                                                 |"<<endl;
        cout<<"\t\t\t|               1、修改姓名         2、修改部门                   |"<<endl;
        cout<<"\t\t\t|               3、修改职务         4、返回上级菜单               |"<<endl;
        cout<<"\t\t\t|                                                                 |"<<endl;
        cout<<"\t\t\t|                          请选择相应编号:                        |"<<endl;
        cout<<"\t\t\t==================================================================="<<endl;
        while(1)
        {
        	gotoxy(67,10);
            char temp[100];
			cin>>temp;
            i=temp[0]-48;
            if(i>4||i==0)
            {
            gotoxy(25,15);
			cout<<"========================输入错误请重新输入========================="<<endl;
			Sleep(2000);
			gotoxy(25,15);
			cout<<"                                                                   "<<endl;
			}
            else break;
        }
        if(i!=4)
        {
            int num;
            gotoxy(43,15);
            cout<<"请输入修改职工编号:";
            cin>>num;
            p1=head;
            while(p1!=NULL)
            {
                if(p1->num==num)break;
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
            if(p1!=NULL)
            {
                //若找到结点
                cout<<"\n\t\t\t编号为"<<num<<"的职工原信息为:"<<endl<<endl<<*p1<<endl;
            }
            else
            {
                cout<<"\t\t\t\t\t  该职工信息不存在!"<<endl;
                Sleep(1500);
                return;
            }
        } //执行修改结点
        switch (i)
        {
        case 1:
        {
            cout<<"\t\t\t姓名修改为:";
            char newname[20];
            cin>>newname;
            strcpy(p1->name,newname);
        }
        break;
        case 2:
        {
            cout<<"\t\t\t部门修改为:";
            char newdepartment[20];
            cin>>newdepartment;
            strcpy(p1->department,newdepartment);
        }
        break;
        case 3:
        {
            cout<<"\t\t\t职务修改为（1：经理；2：技术人员；3：销售人员；4：销售经理):";
            int newjob;
            cin>>newjob;
            	 switch(p1->job)
            	 {
            	 	case 1:employee::managerNum--;break;
            	 	case 2:employee::salesmanNum--;break;
            	 	case 3:employee::technicianNum--;break;
            	 	case 4:employee::salesmanagerNum--;break;            	 		
				 }
				 switch(newjob)
            	 {
            	 	case 1:employee::managerNum++;break;
            	 	case 2:employee::technicianNum++;break;
            	 	case 3:employee::salesmanNum++;break;
            	 	case 4:employee::salesmanagerNum++;break;            	 		
				 }
				 
            p1->job=newjob;
        }
        break;
        case 4:
            return;
        }
        if(p1!=NULL)                          //若找到结点
            cout<<"\t\t\t修改成功！"<<endl;
        cout<<"\t\t\t该职工现在的信息为:"<<endl<<endl<<*p1<<endl;
        getch();
    }
    while (i!=4);
}
