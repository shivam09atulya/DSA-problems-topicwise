#include "display.h"

void kthnode(int k)
{
    struct node *end=head,*kth=head;
    int count=0;
    if(k==0)
    return;
    while(end->next)
    {
        ++count;
        if (count >= k)
        kth = kth->next;
        end=end->next;
     
    }
    if(k>count)
    return;

    printf("%d",kth->data);
}
void main()
{ 
    int k;
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(1);
    insert(2);
    display();
    printf("\nEnter the value of k = ");
    scanf("%d",&k);
    kthnode(k);
}