#include "display.h"

int loopcheck(struct node* h)
{
    struct node *fast=h,*slow=h;

    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow)
        return 1;
        
    }


        return 0;
}
void main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    int a=loopcheck(head);
    if(a==0)
    printf("No Loops");
    else if(a==1){
        printf("loop");
    }
    display();
}