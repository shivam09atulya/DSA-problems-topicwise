#include "display.h"

void sortinsert(int data,struct node *comp)
{
    struct node *t=NULL;

    t = (struct node *)malloc(sizeof(struct node));
    t->data = data;
    while(comp)
    {
    if(head)
    {
        head=t;
        return ;
    }

    else if(comp->data<=data && comp->next==NULL)
        {
            t->next=NULL;
            comp->next=t;
            return;
        }

    else if(comp->data<=data && comp->next->data>data)
        {
            t->next=comp->next;
            comp->next=t;
            return;
        }
        comp=comp->next;

    }

    

}


void main()
{
   /* insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    display();*/
    sortinsert(5,head);
    printf("\n");
    display();
}