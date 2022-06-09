#include "insert.h"
void display(struct node *head)
{
    struct node *count = head;
    printf("\n");
    while (count)
    {
        printf("   %d  ", count->data);
        count = count->next;
    }
    printf("\n");
}