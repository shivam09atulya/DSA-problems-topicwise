#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *array;
};


struct stack *stackInit(struct stack *s1,int capacity)
{
    s1=(struct stack*)malloc(sizeof(struct stack));
    s1->top=-1;
    s1->size=capacity;
    s1->array=(int *)malloc(s1->size*sizeof(int));
    return s1;
}

int isFull(struct stack *s1)
{
    if(s1->size-1==s1->top)
    return 0;
    else 
    return 1;
}

void push(struct stack *s1,int data)
{
    if(!isFull(s1))
    {
        printf("Stack Overflow!!!");
    return;
    }
     s1->array[++s1->top]=data;
}

void display(struct stack *s1)
{
    while(s1->top!=-1)
    {
        printf("%d \t",s1->array[s1->top--]);
    }
}

int main()
{
    struct stack *s1;
    int capacity=10,t=0;;
    s1=stackInit(s1,capacity);
    printf("Enter elements in stack = \n");
    while(t!=-1)
    {
        scanf("%d", &t);
        push(s1,t);
    }
    display(s1);
    return -1;
}