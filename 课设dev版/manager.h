#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"

class manager : virtual public employee
{
    public:
        manager(int level):employee(level){};
        virtual ~manager();

        void inputmoney();
        void display2();
        void money();
        friend istream & operator >>(istream & in,manager& w);
        friend ostream & operator <<(ostream & out,manager& w);
        //int GetbasicMoney() { return basicMoney; }
        //void SetbasicMoney(int val) { basicMoney = val; }
        //int basicMoney;
    protected:

    private:

};


#endif
