#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct stack{
    int top;
    int size;
    int *array;
};

struct stack *init(struct stack *s1,int size)
{
s1=(struct stack *)malloc(sizeof(struct stack));
if(!s1)
 return NULL;
s1->top=-1;
s1->size=size;
s1->array=(int *)malloc(sizeof(int));
if(!s1->array)
return NULL;
return s1;
}

int isFull(struct stack *s1)
{
    return (s1->size-1==s1->top);
}

void push(struct stack *s1,int data)
{
    if(isFull(s1))
    {
    printf("Stack Oveflow!!!");
    return;
    }
    else{
        s1->array[++s1->top]=data;
    }
}

int isEmpty(struct stack *s1)
{
    return (s1->top==-1);
}

void display(struct stack *s1)
{
int i;
for(i=s1->top;i>=0;i--)
{
    printf("%d",s1->array[i]);
}
printf("\n");
}

int pop(struct stack *s1)
{
if(isEmpty(s1))
{
    printf("Stack Underflow!!!");
    return INT_MIN;
}
else{
    return s1->array[s1->top--];
}
}

int peek(struct stack *s1,int how_much)
{
if(how_much>s1->top)
{
    printf("Peek exceeds number of elements ");
    return INT_MIN;
}
return s1->array[s1->top-how_much];

}

void deleteStack(struct stack *s1)
{
    if(s1)
    {
        if(s1->array)
        free(s1->array);
        free(s1);
    }
}

int main()
{
    struct stack *s1;
    int i, t,capacity;
    printf("Enter the capacity = \n");
    scanf("%d",&capacity);
    s1= init(s1,capacity);
    
    printf("Enter the elements into the stack = \n");
    for(i=0;i<capacity;i++)
    {
        scanf("%d",&t);
        push(s1,t);
    }
   
        display(s1);
        printf("The peeked number is = %d\n",peek(s1,3));
        printf("%d\n",pop(s1));
        printf("%d\n",pop(s1));
        printf("%d\n",pop(s1));
        printf("%d\n",pop(s1));
        printf("%d\n",pop(s1));
        printf("%d\n",pop(s1));
    display(s1);
    deleteStack(s1);
    return 0;
}