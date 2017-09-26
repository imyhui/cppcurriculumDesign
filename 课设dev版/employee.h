#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
void gotoxy(int x,int y);
int cinErrorJudge();
class employee
{
public:
    employee();
    employee(int level);
    virtual ~employee();
 
    friend istream& operator >>(istream& in,employee& w);
    friend ostream& operator <<(ostream& out,employee& w);


    static  int display1();//ÏÔÊ¾×ÜÊý 
    void input();
    
    virtual void inputmoney();
    virtual void display();
    virtual void display2()=0;
    virtual void money()=0;



    int Getlevel() { return level; }
    void Setlevel(int val) { level = val;};
    
    char *getjibie()
    {
        return jibie;
    }
    int getworkHour()
    {
        return workHour;
    }
    int GetsalesAmount()
    {
        return salesAmount;
    }
    static int employeeNum;
    static int manNum;
    static int womanNum;
    static int managerNum;
    static int salesmanNum;
    static int technicianNum;
    static int salesmanagerNum;
    
 	int num;
    char name[20];
    char department[20];
    int monthlySalary;
    int level;
    char sex[5];
    char jibie[20];
    int basicMoney;
    int salesAmount;
    int workHour;

    int job;


    employee *next;
protected:

private:
};


#endif
