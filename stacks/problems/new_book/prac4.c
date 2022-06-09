#include "stack_repetitive_doubling.h"

int main()
{
    struct stack *s1=createStack(5);
    push(s1,2);
    push(s1,4);
    push(s1,5);
    push(s1,8);
    push(s1,5);
    push(s1,3);
    push(s1,2);
    push(s1,2);
    push(s1,2);
    push(s1,2);
    push(s1,2);
    push(s1,2);
    push(s1,2);
    push(s1,2);
    push(s1,2);
    push(s1,2);
    push(s1,2);
    push(s1,2);
    push(s1,2);
    push(s1,2);
    push(s1,2);
    push(s1,2);
    push(s1,2);
    pop(s1);
    pop(s1);
    display(s1);
    printf("\n %d",peek(s1));
    delete_stack(s1);
    return 0;
}