#include "link_stack.h"

int main()
{
    struct stack *s1;
    s1=create(s1);
    push(s1,1);
    push(s1,2);
    push(s1,3);
    push(s1,4);
    push(s1,5);
    pop(s1);
    pop(s1);
    pop(s1);
    pop(s1);
    pop(s1);
    pop(s1);
    pop(s1);
    pop(s1);
    display(s1);
    return 0;
}