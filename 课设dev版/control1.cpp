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




void control::addinformation()         //添加职工信息
{
    control control1;
    employee* p=NULL;       //新增结点指针
    int i;             //选择变量
    do
    {
        //添加职工信息菜单
        cout<<"*******************************************************************"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                            请选择增加的员工种类                 *"<<endl;
        cout<<"*               1、增加经理                 2、增加销售人员       *"<<endl;
        cout<<"*               3、增加技术人员             4、增加销售经理       *"<<endl;
        cout<<"*                             5、返回上级菜单                     *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                             请选择相应编号:                     *"<<endl;
        cout<<"*******************************************************************"<<endl; //创建新员工结点
        while(1)
        {
            cin>>i;
            if(i>5||i==0)
                cout<<"输入错误请重新输入"<<endl;
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
            if (head!=NULL)              //链表已经存在
            {
                employee* p1=NULL,*p2=NULL;         //指针初始化
                p1=head;
                if(p1->num==p->num)
                {
                    cout<<"添加重复!"<<endl;
                    break;
                }
                else
                {
                    p2=p1;
                    p1=p1->next;
                }
                p2->next=p;                 //连接结点
                cout<<"信息添加成功!"<<endl;
            }
            else                            //链表不存在
            {
                head=p;                  //连接结点
                cout<<"信息添加成功!"<<endl;
            }
        }
    }
    while (i!=5);
}
void control::cancelinformation()              //删除职工信息
{
    employee*p1=NULL,*p2=NULL;
    p1=head;
    if(p1==NULL)
    {
        cout<<"  系统暂无信息,无法删除,请录入信息!"<<endl;
        return;
    }
    int i;                    //选择变量
    do
    {
        //
        cout<<"*******************************************************************"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                            请选择删除方式                       *"<<endl;
        cout<<"*               1、按照编号                 2、按照姓名           *"<<endl;
        cout<<"*               3、按照部门                 4、返回上级菜单       *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                             请选择相应编号:                     *"<<endl;
        cout<<"*******************************************************************"<<endl;
        while(1)
        {
            cin>>i;
            if(i>4||i==0)
                cout<<"输入错误请重新输入"<<endl;
            else break;
        }
        switch (i)
        {
        case 1:
        {
            int num;
            cout<<"编号:";
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
            cout<<"姓名:";
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
            cout<<"部门:";
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
//删除结点
        if(i!=4)
        {
            if(p1!=NULL)        //找到结点,删除
            {
                if(p1==head)   //要删除的结点是第一个结点
                {
                    head=p1->next;
                    delete p1;
                }
                else            //要删除的结点不是第一个结点
                {
                    p2->next=p1->next;
                    delete p1;
                }
                cout<<"信息删除成功!"<<endl;
                employee::count0--;
            }
            else               //未找到结点
                cout<<"信息删除失败!"<<endl;
        }
    }
    while (i!=4);
}

void control::searchinformation()               //查询职工信息
{
    employee *p1=NULL,*p2=NULL;
    p1=head;
    if(p1==NULL)
    {
        cout<<"  系统暂无信息,无法查询,请录入信息!"<<endl;
        return;
    }
    int i;                 //选择变量
    do
    {
        cout<<"*******************************************************************"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                            请选择查询方式                       *"<<endl;
        cout<<"*               1、按照编号                 2、按照姓名           *"<<endl;
        cout<<"*               3、按照部门                 4、按照职务           *"<<endl;
        cout<<"*                            5、返回上级菜单                      *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                             请选择相应编号:                     *"<<endl;
        cout<<"*******************************************************************"<<endl;
        while(1)
        {
            cin>>i;
            if(i>5||i==0)
                cout<<"输入错误请重新输入"<<endl;
            else break;
        }
        switch(i)
        {
        case 1:
        {
            int num;
            cout<<"编号:";
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
            if(p1!=NULL)                          //若找到结点
                cout<<"职工信息为:"<<endl<<endl<<(*p1)<<endl;
            else
                cout<<"该职工信息不存在!"<<endl;

        }
        break;
        case 2:


        {
            char name[20];
            cout<<"姓名:";
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
            if (p1!=NULL)              //若找到结点
                cout<<(*p1)<<endl;
            else
                cout<<"信息查询失败!"<<endl;

        }
        break;
        case 3:
        {
            char department[20];



            int m=0;
            cout<<"部门:";
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

                cout<<"信息查询失败!"<<endl;


        }
        break;
        case 4:


        {
            int job;
            int n=0;
            cout<<"职务:";
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
                cout<<"查询失败!"<<endl;
        }
        break;
        case 5:
            return;
        }
    }
    while (i!=5);
}

void control::changeinformation()               //修改职工信息
{
    employee*p1=NULL,*p2=NULL;
    if(head==NULL)
    {
        cout<<"  系统暂无信息,无法修改,请录入信息!"<<endl;
        return;
    }
    int i;                     //选择变量
    do
    {
        cout<<"*******************************************************************"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*               1、修改姓名         2、修改部门                   *"<<endl;
        cout<<"*               3、修改职务         4、返回上级菜单               *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                          请选择相应编号:                        *"<<endl;
        cout<<"*******************************************************************"<<endl;
        while(1)
        {
            cin>>i;
            if(i>4||i==0)
                cout<<"输入错误请重新输入"<<endl;
            else break;
        }
        if(i!=4)
        {
            int num;
            cout<<"\t\t请输入修改职工编号:";
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
                /***************************************************************/
                cout<<"编号为"<<num<<"的职工原信息为:"<<endl<<endl<</*(*p1)<<*/endl;
            }
            else
            {
                cout<<"该职工信息不存在!"<<endl;
                return;
            }
        } //执行修改结点
        switch (i)
        {
        case 1:
        {
            cout<<"姓名修改为:";
            char newname[20];

            cin>>newname;
            strcpy(p1->name,newname);
        }


        break;
        case 2:
        {
            cout<<"部门修改为:";
            char newdepartment[20];
            cin>>newdepartment;
            strcpy(p1->department,newdepartment);
        }


        break;
        case 3:
        {
            cout<<"职务修改为（1：经理；2：技术人员；3：销售人员；4：销售经理):";
            int newjob;
            cin>>newjob;
            p1->job=newjob;
        }


        break;
        case 4:
            return;
        }

        if(p1!=NULL)                          //若找到结点
            cout<<"修改成功！"<<endl;

        /************************************************************/
        cout<<"该职工现在的信息为:"<<endl<<endl<</*(*p1)<<*/endl;
    }
    while (i!=4);
}
void control::showinformation()            //显示所有职工信息
{
    cout<<"*************************显示所有职工信息**************************"<<endl;
    employee* p1=head;                //初始化a
    if(p1==NULL)
        cout<<"  系统暂无信息,请录入!"<<endl;
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
        cout<<"  系统暂无信息,无法计算,请录入信息!"<<endl;
        return;


    }
    int i;                     //选择变量
    do
    {
        cout<<"*******************************************************************"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*               1、按照编号         2、按照姓名                   *"<<endl;
        cout<<"*                      0、返回上级菜单                            *"<<endl;
        cout<<"*                          请选择相应编号:                        *"<<endl;
        cout<<"*******************************************************************"<<endl;
        while(1)
        {
            cin>>i;
            if(i>2||i<0)
                cout<<"输入错误请重新输入"<<endl;
            else break;


        }
        switch (i)
        {
        case 1:


        {
            int num;
            cout<<"编号:";
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
            if(p1!=NULL)                          //若找到结点
            {
                cout<<"职工的实际工资为:"<<endl;
                p1->money();
            }
            else
                cout<<"该职工信息不存在!"<<endl;
        }
        break;
        case 2:


        {
            char name[20];
            cout<<"姓名:";
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
            if (p1!=NULL)              //若找到结点
            {
                cout<<"职工的实际工资为:"<<endl;
                p1->money();



            }
            else
                cout<<"信息查询失败!"<<endl;
        }
        break;
        case 0:
            return;
        }
    }
    while(i!=0);
}

void control::readinformation()                //读入员工信息
{
    int level;               //类标记
    employee *p=NULL;
    ifstream infile("employee1.txt",ios::in);//读取一条记录
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
            if (head!=NULL)              //链表已经存在
            {


                employee* p1=NULL;         //指针初始化
                p1=head;
                while (p1->next!=NULL)     //查找尾结点
                {
                    p1=p1->next;
                }
                p1->next=p;                 //连接结点
                cout<<"信息读入成功!"<<endl;
                break;
            }
            else                           //链表不存在
            {
                head=p;                  //连接结点
                cout<<"信息成功!"<<endl;
            }
        }
    }
    infile.close();
    cout<<"*************************信息读入成功**************************"<<endl;
}

void control::keepinformation()                //保存员工信息
{
    employee* p=head;
    if(p==NULL)
    {
        cout<<"  系统暂无信息,无法保存,请录入信息!"<<endl;
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
    cout<<"*************************保存信息成功**************************"<<endl;
}
void control::tongjiformation()
{

    employee *p1=NULL,*p2=NULL;
    p1=head;
    if(p1==NULL)
    {
        cout<<"  系统暂无信息,请录入信息!"<<endl;
        return;
    }
    int i;                 //选择变量
    do
    {
        cout<<"*******************************************************************"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                            请选择统计参数                       *"<<endl;
        cout<<"*               1、按照性别                 2、按照职务           *"<<endl;
        cout<<"*               3、总人数                   4、返回上级菜单       *"<<endl;
        cout<<"*                                                                 *"<<endl;
        cout<<"*                             请选择相应编号:                     *"<<endl;
        cout<<"*******************************************************************"<<endl;
        while( int j=1)
        {
            cin>>i;
            if(i>4||i==0)   cout<<"输入错误请重新输入"<<endl;
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
                cout<<"*   请选择:                                          *"<<endl;
                cout<<"*          1、男员工           2、女员工             *"<<endl;
                cout<<"*                 0、返回上级菜单                    *"<<endl;
                cout<<"*                                                    *"<<endl;
                cout<<"*                 请选择相应编号:                    *"<<endl;
                cout<<"******************************************************"<<endl;
                while(int j=1)
                {
                    cin>>k;
                    if(k>2||k<0)
                        cout<<"输入错误请重新输入"<<endl;
                    else break;
                }
                switch (k)
                {
                case 1:
                    cout<<"男职工数为:"<<employee::count1<<endl;
                    break;
                case 2:
                    cout<<"女职工数为:"<<employee::count2<<endl;
                    break;
                case 0:
                    break;
                default:
                    cout<<"输入错误！"<<endl;

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
                cout<<"*      请选择:                                                *"<<endl;
                cout<<"*               1、经理                 2、技术人员           *"<<endl;
                cout<<"*               3、销售人员             4、销售经理           *"<<endl;
                cout<<"*                          0、返回上级菜单                    *"<<endl;
                cout<<"*                                                             *"<<endl;
                cout<<"*                             请选择相应编号:                 *"<<endl;
                cout<<"***************************************************************"<<endl;
                while(1)

                {
                    cin>>k;


                    if(k>4||k<0)
                        cout<<"输入错误请重新输入"<<endl;
                    else break;
                }
                switch (k)




                {
                case 1:
                    cout<<"经理人数为: "<<employee::count3<<endl;
                    break;
                case 2:
                    cout<<"技术人员人数为: "<<employee::count5<<endl;
                    break;
                case 3:
                    cout<<"销售人员人数为: "<<employee::count4<<endl;
                    break;
                case 4:
                    cout<<"销售经理人数为: "<<employee::count6<<endl;
                    break;
                case 0:
                    break;
                default:
                    cout<<"输入错误！"<<endl;

                }

            }
            while(k!=0);

        }
        break;
        case 3:
            cout<<"总员工数为："<<employee::count0<<endl;
            break;
        case 4:
            break;
        default:
            cout<<"输入错误！"<<endl;
        }
    }
    while(i!=4);
}

