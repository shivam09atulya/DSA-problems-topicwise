#include<stdio.h>
#include<stdlib.h>
#include "insert.h"
void display()
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