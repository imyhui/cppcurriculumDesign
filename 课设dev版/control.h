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
    void changeinformation();//�޸�
    void cancelinformation();//ɾ��
    void addinformation();//�����
    void showinformation();// ��ʾ
    void searchinformation();//���� 
    void countinformation();//���� 
    void readinformation();// ��ȡ 
    void keepinformation();//���� 
    void tongjiformation();//ͳ�� 


    protected:

    private:
        employee* head;

};


#endif
