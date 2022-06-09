#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *array;
};

struct stack *create(int capacity)
{
struct stack *s1;
s1=(struct stack*)malloc(sizeof(struct stack));
if(!s1)
return NULL;
s1->size = capacity;
s1->array=(int *)malloc(s1->size*sizeof(int));
s1->top=-1;

return s1;
}

int isFull(struct stack *s1)
{
return (s1->top==s1->size-1);
}

int isEmpty(struct stack *s1)
{
    return (s1->top==-1);
}

void push(struct stack *s1,int data){

if(isFull(s1))
return;
else
s1->array[++s1->top]=data;
}

int pop(struct stack *s1)
{
if(isEmpty(s1))
return -1;
else
return (s1->array[s1->top--]);
}

void display(struct stack *s1)
{
    for(int i=s1->top;i>=0;i--)
    printf(" %d ",s1->array[i]);
    printf("\n");
}
int main()
{
    struct stack *s1,*s;
    s1=create(10);
    int a[]={1,3,10,0,1,2,4},i=sizeof(a)/sizeof(int)-1;
    for(i;i>=0;)
    {
        if(isEmpty(s1))
        {
        printf(" -1 ");
        push(s1,a[i]);
        i--;
        }
        
        else if(a[i]<s1->array[s1->top])
        {
        printf(" %d ",s1->array[s1->top]);
        push(s1,a[i]);
        i--;
        }

        else
        pop(s1);
    }
    return 0;
}