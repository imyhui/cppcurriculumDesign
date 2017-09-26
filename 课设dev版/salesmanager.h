#ifndef SALESMANAGER_H
#define SALESMANAGER_H

#include "manager.h"
#include "salesman.h"
#include<iostream>
using namespace std;

class salesmanager : public manager,public salesman
{
    public:
        salesmanager();
        salesmanager(int level):manager(level),salesman(level),employee(level){};
        ~salesmanager();

        void inputmoney();
        void display2();
        void money();


        friend istream& operator >>(istream& in,salesmanager& s);
        friend ostream& operator <<(ostream& out,salesmanager& s);
    protected:

    private:
};


#endif
