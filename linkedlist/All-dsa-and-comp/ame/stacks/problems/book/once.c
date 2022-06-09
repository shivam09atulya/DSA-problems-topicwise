#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *array;
};

void init(struct stack *s, int capacity)
{
    if (!s)
        return;
    s = (struct stack *)malloc(sizeof(struct stack));
    if (!s->array)
        return;
    s->array = (int *)malloc(s->size * sizeof(int));
    s->size = capacity;
    s->top = -1;
}

int isFull(struct stack *s)
{
    return (s->top == s->size - 1);
}

int isEmpty(struct stack *s)
{
    return (s->top == -1);
}

void push(struct stack *s, int data)
{
    if (isFull)
        printf("Stack Overflow!!!\n");
    else
        s->array[++s->top] = data;
}

int pop(struct stack *s)
{
    if (isEmpty)
    {
        printf("Stack Underflow!!!\n");
        return -1;
    }
    else
        return s->array[s->top--];
}

void display(struct stack *s)
{
    int i;
    for (i = 0; i < s->size; i++)
        printf("%d", s->array[i]);
}

int peek(struct stack *s)
{
    if (isEmpty)
    {
        printf("Stack Underflow");
        return -1;
    }
    else
        return s->array[s->top];
}

void delete_stack(struct stack *s)
{
    if (s)
    {
        if (s->array)
            free(s->array);
        free(s);
    }
}

int main()
{
    struct stack s1;
    init(&s1, 10);
    push(&s1, 1);
    push(&s1, 2);
    push(&s1, 3);
    push(&s1, 4);
    push(&s1, 5);
    pop(&s1);
    display(&s1);
    return 0;
}