#include "display.h"

struct node *reverse(struct node *p,int k)
{
    if(!p)
    return NULL;
    struct node  *cur=p,*prev=NULL,*next=NULL;

    int count=0;
    while(cur!=NULL && count<k)
    {
        next=cur->next;
        cur->next=prev;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
        prev=cur;
        cur=next;
        count++;
    }

    while(next!=NULL)
    p->next=reverse(next,k);

    return prev;
}

void main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    insert(10);
    display();
    head = reverse(head, 2);
    insert(1);

    display();
    
}