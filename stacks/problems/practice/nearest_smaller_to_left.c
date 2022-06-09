#include "stack.h"

int main()
{
    struct stack *s1;
    s1=createStack(10);
    int a[] = {6, 2, 5, 4, 5, 1, 6};
    for(int i=0;i<sizeof(a)/sizeof(int);)
    {
        if(isEmpty(s1))
        {
            printf(" -1 ");
            push(s1,a[i]);
            i++;
        }
        else if(a[i]>s1->array[s1->top])
        {
            printf(" %d ",s1->array[s1->top]);
            push(s1,a[i]);
            i++;
        }
        else
        pop(s1);
    }
    return 0;
}