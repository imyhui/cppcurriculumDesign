#ifndef SALESMAN_H
#define SALESMAN_H

#include "employee.h"
#include<iostream>
using namespace std;

class salesman : virtual public employee
{
    public:
        salesman(int level):employee(level){};
        virtual ~salesman();

        //int GetsalesAmount() { return salesAmount; }
        //void SetsalesAmount(int val) { salesAmount = val; }
        //double GetCommissionRate() { return CommissionRate; }
        //void  SetCommissionRate(double val) { CommissionRate = val; }

        void inputmoney();
        void display2();
        void money();

        friend istream& operator >>(istream& in,salesman& w);
        friend ostream& operator <<(ostream& out,salesman& w);
        //int salesAmount;
        double CommissionRate;

    protected:

    private:

};
#endif
