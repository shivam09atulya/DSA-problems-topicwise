#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *array;
};

int isFull(struct stack *s1)
{
    return (s1->top==s1->size-1);
}
void create(struct stack *s1,int capacity)
{
    s1->size=capacity;
    s1->top=-1;
    s1->array=(int *)malloc(s1->size*sizeof(int));
    if(!s1)
    return;
}

void push(struct stack *s1,int element)
{
    if(isFull(s1))
    {
    printf("Stack Overflow!!!\n");
    return;
    }
    else
    s1->array[++s1->top]=element;
}

void display(struct stack *s1)
{
    for(int i=s1->top;i>0;i--)
    printf(" %d ",s1->array[i]);
}

int main()
{
    struct stack s1;
    create(&s1,5);
    push(&s1,1);
    push(&s1,2);
    push(&s1,3);
    push(&s1,4);
    push(&s1,5);
    push(&s1,6);
    push(&s1,5);
    display(&s1);

    return 0;
}