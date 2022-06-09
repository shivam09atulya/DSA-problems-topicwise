#include "display.h"

void selectdelete(int val)
{
    struct node *cur=head,*prev=head;
    while(cur)
    {
        if(cur==head && cur->data==val)
        {
            head=head->next;
            cur=head;
        }
       else if(cur->data==val)
        {
            prev->next=cur->next;
            free(cur);
            cur=prev->next;
        }
        else{
            prev=cur;
            cur=cur->next;
        }
    }
}

void main()
{
    insert(1);
    //insert(1);
    //insert(1);
    //insert(1);
    //insert(1);
    //insert(1);
    //insert(1);
    display(head);
    selectdelete(1);
    printf("\nAfter deletion\n");
    display(head);
}