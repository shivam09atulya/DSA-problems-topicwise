#include "insert.h"

void reversedisplay(struct node *t)
{
    if(t->next){
       reversedisplay(t->next);
        printf(" %d ", t->data);
    }
}
void main()
{
    insert(5);
    insert(1);
    insert(3);
    insert(8);
    insert(4);
    insert(9);
    insert(7);
    reversedisplay(head);
}