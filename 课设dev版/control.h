#ifndef CONTROL_H
#define CONTROL_H

#include "myheader.h"
class control
{
    public:
        control(){
		head=NULL;};
        ~control();
    void showface(); 
    void changeinformation();//修改
    void cancelinformation();//删除
    void addinformation();//添加信
    void showinformation();// 显示
    void searchinformation();//查找 
    void countinformation();//计算 
    void readinformation();// 读取 
    void keepinformation();//保存 
    void tongjiformation();//统计 


    protected:

    private:
        employee* head;

};


#endif
