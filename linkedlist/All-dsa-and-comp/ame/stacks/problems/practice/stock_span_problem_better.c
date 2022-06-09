#include "stack.h"

int main()
{
    struct stack *s1;
    s1=createStack(10);
    int a[]={100,80,60,70,60,75,85};
    printf("Enter the date = \n");
    int day=5;
    for(int i=0;i<sizeof(a)/sizeof(int);)
    {

        if(isEmpty(s1))
        {
            printf(" -1 ");
            push(s1,a[i++]);
        }

        else if(a[i]<s1->array[s1->top])
        {

            printf(" %d ",s1->array[s1->top]);
            printf("\n Stock = %d\n",day-i);
            push(s1,a[i++]);
        }
        else
        pop(s1);
    }
    return 0;
}