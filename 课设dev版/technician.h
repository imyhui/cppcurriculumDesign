#ifndef TECHNICIAN_H
#define TECHNICIAN_H

#include "employee.h"
#include<iostream>
using namespace std;

class technician : public employee
{
    public:
        technician(int level):employee(level){};
        ~technician();

        int GetworkHour() { return workHour; }
        void inputmoney();
        void display2();
        void money();
        friend istream& operator >>(istream& in,technician& w);
        friend ostream& operator <<(ostream& out,technician& w);

        //int workHour;
        int moneyPerHour;

    protected:

    private:
};

#endif
