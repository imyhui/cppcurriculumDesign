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
        gotoxy(loacatx,loacat++);cout<<"|                      ��ӭʹ�ñ�ְ����Ϣ����ϵͳ                 |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                                                                 |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|             1�����ְ����Ϣ         2����ѯְ����Ϣ             |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|             3��ɾ��ְ����Ϣ         4���޸�ְ����Ϣ             |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|             5����ʾ����ְ����Ϣ     6������Ա������             |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|             7������Ա����Ϣ         8������Ա����Ϣ             |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|             9��ͳ��Ա����Ϣ         0���˳�ϵͳ                 |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                                                                 |"<<endl;
        gotoxy(loacatx,loacat++);cout<<"|                        ��ѡ����Ӧ���:                          |"<<endl;
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
			cout<<"�����������������"<<endl;
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

