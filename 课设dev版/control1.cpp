#include "control.h"
control::~control()
{
    employee* p=NULL;
    p=head;
    while (p!=NULL)
    {
        p=p->next;
        delete head;
        head=p;
    }
    head=NULL;
}




void control::addinformation()         //���ְ����Ϣ
{
    control control1;
    employee* p=NULL;       //�������ָ��
    int i;             //ѡ�����
    do
    {
        //���ְ����Ϣ�˵�
        cout<<"*******************************************************************"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                            ��ѡ�����ӵ�Ա������                 *"<<endl;
        cout<<"*               1�����Ӿ���                 2������������Ա       *"<<endl;
        cout<<"*               3�����Ӽ�����Ա             4���������۾���       *"<<endl;
        cout<<"*                             5�������ϼ��˵�                     *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                             ��ѡ����Ӧ���:                     *"<<endl;
        cout<<"*******************************************************************"<<endl; //������Ա�����
        while(1)
        {
            cin>>i;
            if(i>5||i==0)
                cout<<"�����������������"<<endl;
            else break;
        }
        switch(i)
        {
        case 1:
            p=new manager(1);
            cin>>*p;
            break;
        case 2:
            p=new salesman(2);
            cin>>*p;
            break;
        case 3:
            p=new technician(3);
            cin>>*p;
            break;
        case 4:
            p=new salesmanager(4);
            cin>>*p;
            break;
        case 5:
            break;

        }
        p->next=NULL;
        if(i!=5)
        {
            if (head!=NULL)              //�����Ѿ�����
            {
                employee* p1=NULL,*p2=NULL;         //ָ���ʼ��
                p1=head;
                if(p1->num==p->num)
                {
                    cout<<"����ظ�!"<<endl;
                    break;
                }
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
                p2->next=p;                 //���ӽ��
                cout<<"��Ϣ��ӳɹ�!"<<endl;
            }
            else                            //��������
            {
                head=p;                  //���ӽ��
                cout<<"��Ϣ��ӳɹ�!"<<endl;
            }
        }
    }
    while (i!=5);
}
void control::cancelinformation()              //ɾ��ְ����Ϣ
{
    employee*p1=NULL,*p2=NULL;
    p1=head;
    if(p1==NULL)
    {
        cout<<"  ϵͳ������Ϣ,�޷�ɾ��,��¼����Ϣ!"<<endl;
        return;
    }
    int i;                    //ѡ�����
    do
    {
        //
        cout<<"*******************************************************************"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                            ��ѡ��ɾ����ʽ                       *"<<endl;
        cout<<"*               1�����ձ��                 2����������           *"<<endl;
        cout<<"*               3�����ղ���                 4�������ϼ��˵�       *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                             ��ѡ����Ӧ���:                     *"<<endl;
        cout<<"*******************************************************************"<<endl;
        while(1)
        {
            cin>>i;
            if(i>4||i==0)
                cout<<"�����������������"<<endl;
            else break;
        }
        switch (i)
        {
        case 1:
        {
            int num;
            cout<<"���:";
            cin>>num;
            p1=head;
            while (p1!=NULL)
            {
                if (p1->num==num)
                    break;
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
        }
        break;
        case 2:
        {
            char name[20];
            cout<<"����:";
            cin>>name;
            p1=head;
            while (p1!=NULL)
            {
                if (strcmp(p1->name,name)==0)break;
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
        }
        break;
        case 3:
        {
            char department[20];
            cout<<"����:";
            cin>>department;
            p1=head;
            while (p1!=NULL)
            {
                if (strcmp(p1->department,department)==0)
                    break;
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
        }
        break;
        case 4:
            return;
        }
//ɾ�����
        if(i!=4)
        {
            if(p1!=NULL)        //�ҵ����,ɾ��
            {
                if(p1==head)   //Ҫɾ���Ľ���ǵ�һ�����
                {
                    head=p1->next;
                    delete p1;
                }
                else            //Ҫɾ���Ľ�㲻�ǵ�һ�����
                {
                    p2->next=p1->next;
                    delete p1;
                }
                cout<<"��Ϣɾ���ɹ�!"<<endl;
                employee::count0--;
            }
            else               //δ�ҵ����
                cout<<"��Ϣɾ��ʧ��!"<<endl;
        }
    }
    while (i!=4);
}

void control::searchinformation()               //��ѯְ����Ϣ
{
    employee *p1=NULL,*p2=NULL;
    p1=head;
    if(p1==NULL)
    {
        cout<<"  ϵͳ������Ϣ,�޷���ѯ,��¼����Ϣ!"<<endl;
        return;
    }
    int i;                 //ѡ�����
    do
    {
        cout<<"*******************************************************************"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                            ��ѡ���ѯ��ʽ                       *"<<endl;
        cout<<"*               1�����ձ��                 2����������           *"<<endl;
        cout<<"*               3�����ղ���                 4������ְ��           *"<<endl;
        cout<<"*                            5�������ϼ��˵�                      *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                             ��ѡ����Ӧ���:                     *"<<endl;
        cout<<"*******************************************************************"<<endl;
        while(1)
        {
            cin>>i;
            if(i>5||i==0)
                cout<<"�����������������"<<endl;
            else break;
        }
        switch(i)
        {
        case 1:
        {
            int num;
            cout<<"���:";
            cin>>num;
            p1=head;
            while(p1!=NULL)
            {
                if(p1->num==num)
                    break;
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
            if(p1!=NULL)                          //���ҵ����
                cout<<"ְ����ϢΪ:"<<endl<<endl<<(*p1)<<endl;
            else
                cout<<"��ְ����Ϣ������!"<<endl;

        }
        break;
        case 2:


        {
            char name[20];
            cout<<"����:";
            cin>>name;
            p1=head;
            while (p1!=NULL)
            {
                if (strcmp(p1->name,name)==0)                     break;
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
            if (p1!=NULL)              //���ҵ����
                cout<<(*p1)<<endl;
            else
                cout<<"��Ϣ��ѯʧ��!"<<endl;

        }
        break;
        case 3:
        {
            char department[20];



            int m=0;
            cout<<"����:";
            cin>>department;
            p1=head;
            while (p1!=NULL)
            {
                if (strcmp(p1->department,department)==0)
                {
                    cout<<(*p1)<<endl;



                    p2=p1;
                    p1=p1->next;
                    m++;



                }
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
            if (m==0)

                cout<<"��Ϣ��ѯʧ��!"<<endl;


        }
        break;
        case 4:


        {
            int job;
            int n=0;
            cout<<"ְ��:";
            cin>>job;
            p1=head;
            while (p1!=NULL)
            {
                if (p1->job==job)
                {
                    cout<<(*p1)<<endl;



                    p2=p1;
                    p1=p1->next;
                    n++;

                }
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
            if (n==0)
                cout<<"��ѯʧ��!"<<endl;
        }
        break;
        case 5:
            return;
        }
    }
    while (i!=5);
}

void control::changeinformation()               //�޸�ְ����Ϣ
{
    employee*p1=NULL,*p2=NULL;
    if(head==NULL)
    {
        cout<<"  ϵͳ������Ϣ,�޷��޸�,��¼����Ϣ!"<<endl;
        return;
    }
    int i;                     //ѡ�����
    do
    {
        cout<<"*******************************************************************"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*               1���޸�����         2���޸Ĳ���                   *"<<endl;
        cout<<"*               3���޸�ְ��         4�������ϼ��˵�               *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                          ��ѡ����Ӧ���:                        *"<<endl;
        cout<<"*******************************************************************"<<endl;
        while(1)
        {
            cin>>i;
            if(i>4||i==0)
                cout<<"�����������������"<<endl;
            else break;
        }
        if(i!=4)
        {
            int num;
            cout<<"\t\t�������޸�ְ�����:";
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
                //���ҵ����
                /***************************************************************/
                cout<<"���Ϊ"<<num<<"��ְ��ԭ��ϢΪ:"<<endl<<endl<</*(*p1)<<*/endl;
            }
            else
            {
                cout<<"��ְ����Ϣ������!"<<endl;
                return;
            }
        } //ִ���޸Ľ��
        switch (i)
        {
        case 1:
        {
            cout<<"�����޸�Ϊ:";
            char newname[20];

            cin>>newname;
            strcpy(p1->name,newname);
        }


        break;
        case 2:
        {
            cout<<"�����޸�Ϊ:";
            char newdepartment[20];
            cin>>newdepartment;
            strcpy(p1->department,newdepartment);
        }


        break;
        case 3:
        {
            cout<<"ְ���޸�Ϊ��1������2��������Ա��3��������Ա��4�����۾���):";
            int newjob;
            cin>>newjob;
            p1->job=newjob;
        }


        break;
        case 4:
            return;
        }

        if(p1!=NULL)                          //���ҵ����
            cout<<"�޸ĳɹ���"<<endl;

        /************************************************************/
        cout<<"��ְ�����ڵ���ϢΪ:"<<endl<<endl<</*(*p1)<<*/endl;
    }
    while (i!=4);
}
void control::showinformation()            //��ʾ����ְ����Ϣ
{
    cout<<"*************************��ʾ����ְ����Ϣ**************************"<<endl;
    employee* p1=head;                //��ʼ��a
    if(p1==NULL)
        cout<<"  ϵͳ������Ϣ,��¼��!"<<endl;
    while(p1!=NULL)
    {
        /*********************************************/
        cout<<(*p1)<<endl;
        p1=p1->next;
    }
}

void control::countinformation()
{
    employee*p1=NULL,*p2=NULL;
    if(head==NULL)
    {
        cout<<"  ϵͳ������Ϣ,�޷�����,��¼����Ϣ!"<<endl;
        return;


    }
    int i;                     //ѡ�����
    do
    {
        cout<<"*******************************************************************"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*               1�����ձ��         2����������                   *"<<endl;
        cout<<"*                      0�������ϼ��˵�                            *"<<endl;
        cout<<"*                          ��ѡ����Ӧ���:                        *"<<endl;
        cout<<"*******************************************************************"<<endl;
        while(1)
        {
            cin>>i;
            if(i>2||i<0)
                cout<<"�����������������"<<endl;
            else break;


        }
        switch (i)
        {
        case 1:


        {
            int num;
            cout<<"���:";
            cin>>num;
            p1=head;
            while(p1!=NULL)
            {
                if(p1->num==num)
                    break;
                else
                {
                    p2=p1;
                    p1=p1->next;

                }
            }
            if(p1!=NULL)                          //���ҵ����
            {
                cout<<"ְ����ʵ�ʹ���Ϊ:"<<endl;
                p1->money();
            }
            else
                cout<<"��ְ����Ϣ������!"<<endl;
        }
        break;
        case 2:


        {
            char name[20];
            cout<<"����:";
            cin>>name;
            p1=head;
            while (p1!=NULL)
            {
                if (strcmp(p1->name,name)==0)                     break;
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
            }
            if (p1!=NULL)              //���ҵ����
            {
                cout<<"ְ����ʵ�ʹ���Ϊ:"<<endl;
                p1->money();



            }
            else
                cout<<"��Ϣ��ѯʧ��!"<<endl;
        }
        break;
        case 0:
            return;
        }
    }
    while(i!=0);
}

void control::readinformation()                //����Ա����Ϣ
{
    int level;               //����
    employee *p=NULL;
    ifstream infile("employee1.txt",ios::in);//��ȡһ����¼
    if(!infile)
    {
        cerr<<"Open error!"<<endl;   //abort();
    }
    while(level!=0)
    {

        infile>>level;
        switch(level)
        {
        case 1:
        {
            p=new manager(1);
            p->level=1;
            infile>>p->num>>p->name>>p->sex>>p->bratechniciannch>>p->job>>p->basicMoney;
            infile>>p->jibie;
        }
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
            infile>>p->num>>p->name>>p->sex>>p->department>>p->job>>p->basicMoney>>p->jibie>>p->salesAmount;
        }
        break;
        }

        p->next=NULL;
        if(level!=0)
        {
            if (head!=NULL)              //�����Ѿ�����
            {


                employee* p1=NULL;         //ָ���ʼ��
                p1=head;
                while (p1->next!=NULL)     //����β���
                {
                    p1=p1->next;
                }
                p1->next=p;                 //���ӽ��
                cout<<"��Ϣ����ɹ�!"<<endl;
                break;
            }
            else                           //��������
            {
                head=p;                  //���ӽ��
                cout<<"��Ϣ�ɹ�!"<<endl;
            }
        }
    }
    infile.close();
    cout<<"*************************��Ϣ����ɹ�**************************"<<endl;
}

void control::keepinformation()                //����Ա����Ϣ
{
    employee* p=head;
    if(p==NULL)
    {
        cout<<"  ϵͳ������Ϣ,�޷�����,��¼����Ϣ!"<<endl;
        return;
    }
    ofstream outfile("employee1.txt",ios::out);
    if(!outfile)
    {
        cerr<<"Open error!"<<endl;   //abort();
    }
    while(p!=NULL)
    {
        outfile<<p->level<<" "<<p->num<<" "<<p->name<<" "<<p->sex<<" "<<p->department <<" "<<p->job<<" ";
        if(p->level==1)
        {
            outfile<<p->getjibie();

        }
        else if(p->level==2)
        {


            outfile<<p->GetsalesAmount();
        }
        else if(p->level==3)
        {
            outfile<<p->getworkHour();
        }
        else if(p->level==4)

        {
            outfile<<p->getjibie()<<" "<<p->GetsalesAmount();
        }
        outfile<<endl;
        p=p->next;

    }
    outfile<<"0"<<endl;
    outfile.close();
    cout<<"*************************������Ϣ�ɹ�**************************"<<endl;
}
void control::tongjiformation()
{

    employee *p1=NULL,*p2=NULL;
    p1=head;
    if(p1==NULL)
    {
        cout<<"  ϵͳ������Ϣ,��¼����Ϣ!"<<endl;
        return;
    }
    int i;                 //ѡ�����
    do
    {
        cout<<"*******************************************************************"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                            ��ѡ��ͳ�Ʋ���                       *"<<endl;
        cout<<"*               1�������Ա�                 2������ְ��           *"<<endl;
        cout<<"*               3��������                   4�������ϼ��˵�       *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                             ��ѡ����Ӧ���:                     *"<<endl;
        cout<<"*******************************************************************"<<endl;
        while( int j=1)
        {
            cin>>i;
            if(i>4||i==0)   cout<<"�����������������"<<endl;
            else break;
        }
        switch (i)
        {
        case 1:
        {
            int k;
            do
            {
                cout<<"******************************************************"<<endl;
                cout<<"*                                                    *"<<endl;
                cout<<"*   ��ѡ��:                                          *"<<endl;
                cout<<"*          1����Ա��           2��ŮԱ��             *"<<endl;
                cout<<"*                 0�������ϼ��˵�                    *"<<endl;
                cout<<"*                                                    *"<<endl;
                cout<<"*                 ��ѡ����Ӧ���:                    *"<<endl;
                cout<<"******************************************************"<<endl;
                while(int j=1)
                {
                    cin>>k;
                    if(k>2||k<0)
                        cout<<"�����������������"<<endl;
                    else break;
                }
                switch (k)
                {
                case 1:
                    cout<<"��ְ����Ϊ:"<<employee::count1<<endl;
                    break;
                case 2:
                    cout<<"Ůְ����Ϊ:"<<employee::count2<<endl;
                    break;
                case 0:
                    break;
                default:
                    cout<<"�������"<<endl;

                }
            }
            while(k!=0);
        }
        break;
        case 2:
        {
            int k;
            do
            {
                cout<<"***************************************************************"<<endl;
                cout<<"*                                                             *"<<endl;
                cout<<"*      ��ѡ��:                                                *"<<endl;
                cout<<"*               1������                 2��������Ա           *"<<endl;
                cout<<"*               3��������Ա             4�����۾���           *"<<endl;
                cout<<"*                          0�������ϼ��˵�                    *"<<endl;
                cout<<"*                                                             *"<<endl;
                cout<<"*                             ��ѡ����Ӧ���:                 *"<<endl;
                cout<<"***************************************************************"<<endl;
                while(1)

                {
                    cin>>k;


                    if(k>4||k<0)
                        cout<<"�����������������"<<endl;
                    else break;
                }
                switch (k)




                {
                case 1:
                    cout<<"��������Ϊ: "<<employee::count3<<endl;
                    break;
                case 2:
                    cout<<"������Ա����Ϊ: "<<employee::count5<<endl;
                    break;
                case 3:
                    cout<<"������Ա����Ϊ: "<<employee::count4<<endl;
                    break;
                case 4:
                    cout<<"���۾�������Ϊ: "<<employee::count6<<endl;
                    break;
                case 0:
                    break;
                default:
                    cout<<"�������"<<endl;

                }

            }
            while(k!=0);

        }
        break;
        case 3:
            cout<<"��Ա����Ϊ��"<<employee::count0<<endl;
            break;
        case 4:
            break;
        default:
            cout<<"�������"<<endl;
        }
    }
    while(i!=4);
}

