#include "stack.h"

int main()
{
    struct stack *s1;
    s1=createStack(10);
    push(s1,1);
    push(s1,2);
    push(s1,3);
    pop(s1);
    display(s1);
    return 0;
}