#include "display.h"

void reversepair(struct node *first)
{
    int temp=0;
    struct node *second=head->next;
    while(second)
    {
       /* if(second->next)

        {
            temp = first->data;
            first->data = second->data;
            second->data = temp;
            first=second->next;
        }
        */
        temp=first->data;
        first->data=second->data;
        second->data=temp;
        if(!second->next)
        second = second->next->next;
        if(second->next)
        second=second->next;
        first=first->next->next;
       
    }

}


void main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    //insert(5);
    //insert(6);
    display();
    reversepair(head);
    printf("\n");
    display();
}