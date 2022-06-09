#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct stack{
    int top;
    int size;
    int *array;
};

struct stack  *createStack(int capacity)
{
struct stack *s=(struct stack *)malloc(sizeof(struct stack ));
if(!s)
return NULL;
s=(struct stack *)malloc(sizeof(struct stack));
if(!s->array)
return NULL;
s->array=(int *)malloc(s->size*sizeof(int));
s->size=capacity;
s->top=-1;
return s;
}


int isFull(struct stack *s)
{
return (s->top==s->size-1);

}

int isEmpty(struct stack *s)
{
return (s->top==-1);
}


void push(struct stack *s,int data)
{
    if(isFull(s))
    {
    printf("Stack Overflow!!!\n");
    return;
    }
    else
    s->array[++s->top]=data;
}

int pop(struct stack *s)
{
    if(isEmpty(s))
    {
    printf("Stack Underflow!!!\n");
    return -1;
    }
    else
    return s->array[s->top--];
}

void display(struct stack *s)
{
    for(int i=s->top;i>=0;i--)
    printf(" %d ",s->array[i]);
    printf("\n");
}

int peek(struct stack *s)
{
    if(isEmpty(s))
    {
    printf("Stack Underflow");
    return -1;
}
    else
    return s->array[s->top];
}

void delete_stack(struct stack *s)
{
    if(s)
    {
        if(s->array)
        free(s->array);
        free(s);
    }
}