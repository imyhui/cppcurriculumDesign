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

