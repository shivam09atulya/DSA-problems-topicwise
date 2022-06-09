#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *s;
};

void push(struct stack *s1, char data)
{
    if(s1->top==s1->size)
    {
        printf("Stack Overflow!!!");
        return;
    }
    else{
        s1->top++;
        s1->s[s1->top]=data;
    }

}

void display(struct stack s1)
{

    for (int i = 0; i <= s1.top; i++)
    {
        printf("%d\t", s1.s[i]);
    }
}

int pop(struct stack *s1)
{
    if (s1->top == -1)
    {
        printf("Stack Underflow!!!");
        return -1;
    }
    else
    {
        int x = (int)s1->s[s1->top];
        s1->top--;
        return x;
    }
}

void peek(struct stack s1, int pos)
{
    if (s1.top - pos + 1 < 0)
    {
        printf("\nPosition exceeds the numer of elements !!!");
        return;
    }
    printf("\nAt position %d is the number =  %d", pos, s1.s[s1.top - pos + 1]);
}

int isEmpty(struct stack s1)
{
    if (s1.top==-1)
    return 1;
    else
    return 0;
}