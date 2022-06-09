#include "display.h"

void reverse()
{
    struct node *prev=NULL,*next=head->next,*cur=head;
    while(cur)
    {
        cur->next=prev;
        prev=cur;
        cur=next;
        if(next!=NULL)
        next=next->next;
    }
    head=prev;
}
void main()
{
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(2);
    insert(1);
    insert(4);
    display();
    reverse();
    printf("\n");
    display();

}