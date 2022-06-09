#include "stack.h"

int main()
{
    struct stack *s1;
    s1=createStack(10);
    push(s1,1);
    push(s1,2);
    push(s1,3);
    push(s1,4);
    push(s1,5);
    display(s1);
    int store[10],i=0,size=s1->top;
    while(!isEmpty(s1))
    store[i++]=pop(s1);
    for(i=0;i<=size;i++)
    push(s1,store[i]);
    display(s1);
    return 0;
}