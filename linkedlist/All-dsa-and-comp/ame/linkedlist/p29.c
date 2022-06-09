#include "display.h"

void evenodd(struct node *h)
{
    int count=0;
    while(h)
    {
        count++;
        h=h->next;
    }
    if(count%2==0)
    printf("\neven");
    else
    printf("\nodd");

}
void main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    //insert(6);
    evenodd(head);
}