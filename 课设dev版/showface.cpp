#include "control.h"
void control::showface()                // 
{
    control control1;
    Face face1;
    int i;
    do
    {
		system("cls");
    	face1.progressBar();
    	int loacatx=25,loacat=5;
    	/*string temp_str;
    	temp_str="===================================================================";
		face1.showSurface(loacatx,loacat++,temp_str);*/
		gotoxy(loacatx,loacat++);cout<<"==================================================================="<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                                                                 |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                      欢迎使用本职工信息管理系统                 |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                                                                 |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|             1、添加职工信息         2、查询职工信息             |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|             3、删除职工信息         4、修改职工信息             |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|             5、显示所有职工信息     6、计算员工工资             |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|             7、读入员工信息         8、保存员工信息             |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|             9、统计员工信息         0、退出系统                 |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                                                                 |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                        请选择相应编号:                          |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"==================================================================="<<endl;
        while(1)
        {
        	char temp[100];
        	gotoxy(66,15);
			cin>>temp;
            i=temp[0]-48;
            if(i>9||i<0) 
			{
			gotoxy(50,18);
			cout<<"输入错误请重新输入"<<endl;
			Sleep(2000);
			gotoxy(50,18);
			cout<<"                  "<<endl;
			
			}
            else break;
        }
        switch(i)
        {
        case 1:
            control1.addinformation();
            break;
        case 2:
            control1.searchinformation();
            break;
        case 3:
            control1.cancelinformation();
            break;
        case 4:
            control1.changeinformation();
            break;
        case 5:
            control1.showinformation();
            break;
        case 6:
            control1.countinformation();
            break;
        case 7:
            control1.readinformation();
            break;
        case 8:
            control1.keepinformation();
            break;
        case 9:
            control1.tongjiformation();
            break;
        case 0:
        	gotoxy(5,17);
            break;
        }
    }
    while(i!=0);
}

