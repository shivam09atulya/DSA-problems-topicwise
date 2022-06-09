#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
} *head = NULL;
void init()
{
    struct node *last, *t = NULL;
    int n, i;
    printf("Enter the size of linked list = \n");
    scanf("%d", &n);
    printf("Enter the elements = \n");
    head = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &head->data);
    head->next = NULL;
    head->prev = NULL;
    last = head;
    for (i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &t->data);
        t->next=NULL;
        last->next = t;
        t->prev = last;
        last = t;
    }
}
void display(struct node *head)
{
    while (head != NULL)
    {
        printf(" %d ", head->data);
        head = head->next;
    }
}
struct node* reverse(struct node *head)
{struct node *prev=NULL,*cur=head,*next=head->next;
    while (cur != NULL)
    {
        cur->next = prev;
        cur->prev = next;
        prev = cur;
        cur = next;    
        if(next==NULL)
        break;                                                 
        next = next->next;
    }
    
   return prev;
}
void main()
{
    init();
    display(head);
    head=reverse(head);
    printf("\n");
    display(head);
}