#include "display.h"
struct node *reverse(struct node *h)
{
struct node *prev = NULL, *cur = h, *next = NULL;
while (cur)
{
    next = cur->next;
    cur->next = prev;
    prev = cur;
    cur = next;
}
h = prev;
return prev;
}