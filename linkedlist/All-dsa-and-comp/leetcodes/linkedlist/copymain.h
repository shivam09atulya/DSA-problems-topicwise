#include "reverse.h"
void copy(struct node *h)
{
    struct node *t = NULL, *last1;
    while (h)
    {
        if (start == NULL)
        {
            start = (struct node *)malloc(sizeof(struct node));
            start->next = NULL;
            start->data = h->data;
            last1 = start;
        }
        else
        {
            t = (struct node *)malloc(sizeof(struct node));
            t->data = h->data;
            t->next = NULL;
            last1->next = t;
            last1 = t;
        }
        h = h->next;
    }
}