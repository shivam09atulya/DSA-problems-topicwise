#include<stdio.h>
#include<stdlib.h>

struct stack{
    int front;
    int size;
    int *s;
};

void push(struct stack *s1,int data)
{
    if(s1->front==s1->size-1)
    {
        printf("Stack Overflow!!!");
        return;
    }
    else{
        s1->front++;
        s1->s[s1->front]=data;
    }

}

void display(struct stack s1)
{
    
    for(int i=0;i<=s1.front;i++)
    {
        printf("%d\t",s1.s[i]);
    }
}

int pop(struct stack *s1)
{
    if(s1->front==-1)
    {
        printf("Stack Underflow!!!");
        return -1;
    }
    else{
        int x=s1->s[s1->front];
        s1->front--;
        return x;
    }
}

void peek(struct stack s1,int pos)
{
    if(s1.front-pos+1<0)
    {
        printf("\nPosition exceeds the numer of elements !!!");
        return;
    }
    printf("\nAt position %d is the number =  %d",pos,s1.s[s1.front-pos+1]);

}


void main()
{
    struct stack s1;
    printf("Enter the size of stack = ");
    scanf("%d",&s1.size);
    s1.front=-1;
    s1.s=(int*)malloc(s1.size*sizeof(int));
    int i;
    while(1)
    {
        printf("Enter the data and -1 to exit = ");
        scanf("%d", &i);
        if(i!=-1)
        push(&s1, i);
        else
        break;
    }
    display(s1);
    // printf("\nPop() : %d",pop(&s1));
    // printf("\nPop() : %d", pop(&s1));
    // printf("\nPop() : %d", pop(&s1));
    peek(s1,2);
}