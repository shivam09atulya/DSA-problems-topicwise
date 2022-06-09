#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head = NULL;

void init(int n)
{
    int data;
    struct node *t = NULL;
    printf("Enter the elements = \n");
    head = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &head->data);
    head->next = NULL;
    struct node *last = head;
     while (n--)
    {
        t = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &t->data);
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display()
{
    while (head != NULL)
    {
        printf("\n%d\n", head->data);
        head = head->next;
    }
}
void main()
{
    int n;
    printf("Enter the size = \n");
    scanf("%d", &n);
    init(n);
    display();
    printf("head =  %d ",head->data);
}