 #include "stack.h"

 int main()
 {
     struct stack *s1,*s2;
     s1=createStack(10);
     s2=createStack(10);
     int a[]={100,80,60,70,60,75,85};
     int day,count=0;
    for(int i=0;i<sizeof(a)/sizeof(int);)
    {
        count=1;
        if(isEmpty(s1))
        {
            printf(" 1 ");
            push(s1,a[i++]);
            push(s2,1);

        }

        else if(a[i]>s1->array[s1->top])
        {
            count+=pop(s2);
            printf(" %d ",count);
            pop(s1);
            push(s2,count);
            push(s1,a[i]);
        }
        else{
        
        push(s1,a[i++]);
        printf(" 1 ");
        push(s2,1);
        }
    }
     return 0;
 }