#include "display.h"

struct node *reverse(struct node *h)
{
    struct node *cur=h,*next=cur,*prev=NULL;
    while(cur)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    return prev;
}

void main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    display(head);
    struct node *here=head;int t=2;
    while(t--)
    here=here->next;
    display(reverse(here));
    display(head);
}