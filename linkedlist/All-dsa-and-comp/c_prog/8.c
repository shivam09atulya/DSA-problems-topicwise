#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *s;
};

int isFull(struct stack s1)
{
    if (s1.top == s1.size - 1)
    {
        printf("Stack Overflow!!!");
        return 1;
    }
    return 0;
}

int isEmpty(struct stack s1)
{
    if (s1.top == -1)
    {
        printf("Stack Underflow!!!");
        return 1;
    }
    return 0;
}

void init(struct stack *s1, int capacity)
{
    s1 = (struct stack *)malloc(sizeof(struct stack));
    if (!s1)
        return;
    s1->size = capacity;
    s1->top = -1;
    s1->s = (char *)malloc(s1->size * sizeof(char));
    if (!s1)
        return;
}

void push(struct stack *s1, char input)
{
    if (isFull)
        return;
    else
    {
        s1->s[++s1->top] = input;
    }
}

char pop(struct stack *s1)
{
    if (isFull)
        return -1;
    else
    {
        return s1->s[s1->top--];
    }
}

char top(struct stack s1)
{
    return s1.s[s1.top];
}

void palin_check(char *exp)
{
    struct stack s1, s2;
    init(&s1, strlen(exp));
    init(&s2, strlen(exp));
    int i = 0, length = strlen(exp), count = 0;
    while (exp[i] != 'X')
    {
        if (exp[i] == 'a' || exp[i] == 'b')
            push(&s1, exp[i++]);
    }
    i = length ;
    while (exp[i] != 'X')
    {
        if (exp[i] == 'a' || exp[i] == 'b')
            push(&s2, exp[i--]);
    }
    if (s1.top == s2.top)
    {
        while (s1.top != -1)
        {
            if (pop(&s1) != pop(&s2))
                ++count;
            break;
        }
    }
    if (count == 0)
        printf("Palindrome!!!");
    else
        printf("Not a Palindrome!!!");
}

int main()
{
    char exp[20];
    printf("Enter the expression = \n");
    scanf("%s", &exp);
    palin_check(exp);
}