#include<stdio.h>
#include<stdlib.h>

struct stack{
    int top;
    int size;
    int *p;
};

void push(struct stack *s1,int data)
{
   if(s1->top==s1->size-1)
    {
        printf("Stack Overflow!!!\n");
        return;

    }

        s1->top++;
        s1->p[s1->top]=data;
        printf("Push()  : %d\n",data);
    
}

void display(struct stack s1)
{
    while(s1.top!=-1)
    {
        printf("%d\t",s1.p[s1.top]);
        s1.top--;
    }
    printf("\n");
}


int pop(struct stack *s1)
{
if(s1->top==-1)
{
    printf("Stack Underflow    -1");
    return -1;
}
    int m=s1->p[s1->top];
    s1->top--;
    printf("Pop() : %d\n",m);
    return m;
}

int peek(struct stack s1,int data)
{
    if(s1.top-data<0)
    {
        printf("\n Peeking value exceeds entered values \n");
        return -1;
    }
    return s1.p[s1.top-data];
}

void main()
{
    struct stack s1;
    s1.top=-1;
    printf("Enter the size of stack = ");
    scanf("%d",&s1.size);
    s1.p=(int*)malloc(s1.size*sizeof(int));

    push(&s1,1);
    push(&s1,2);
    push(&s1,3);
    push(&s1,4);
    push(&s1,5);
    push(&s1,6);
    pop(&s1);
    display(s1);
    display(s1);
    printf("The value you peeked for is %d", peek(s1,2));
    
}