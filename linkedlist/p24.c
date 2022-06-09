#include "display.h"
void middle()
{
    struct node *end=head,*mid=head;
    int count=0;
    while(end)
    {
        count++;
        end=end->next;
    }
    int m=count/2;
    while(m)
    {
        mid=mid->next;
        m--;
    }
    printf("\n %d ",mid->data);
}

void main()
{
    insert(5);
    insert(6);
    insert(4);
    insert(3);
    insert(7);
    insert(8);
    insert(5);
    insert(9);
    insert(5);
    display();
    middle();
}