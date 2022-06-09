#include "stack.h"

int main()
{
    struct stack *s1;
    s1=createStack(10);
    int a[]={1,3,2,4};
    int i;
    for(i=0;i<=sizeof(a)/sizeof(int)-1;)
    {
        if(isEmpty(s1))
        {
            printf(" -1 ");
            push(s1,a[i]);
            i++;
        }
        else if( s1->array[s1->top]>a[i])
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