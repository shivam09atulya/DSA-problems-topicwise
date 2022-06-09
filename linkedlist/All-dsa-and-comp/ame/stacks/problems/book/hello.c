#include "stack.h"

int main()
{
    struct stack s1;
    s1.size=10;
    s1.top=-1;
    s1.s=(int *)malloc(sizeof(int));
    push(&s1,1);
    push(&s1,2);
    push(&s1,3);
    push(&s1,4);
    push(&s1,5);
    display(&s1);
    return 0;

}