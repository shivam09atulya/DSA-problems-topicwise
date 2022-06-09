#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL;

void insert(int data)
{
    struct node *t, *last;

    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        last = head;
    }
    else
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = data;
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
