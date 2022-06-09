#include<stdio.h>
#include<stdlib.h>

struct node1{
    int data;
    struct node1 *next;
}*head1=NULL;

struct node2{
    int data;
    struct node2 *next;
}*head2;

struct nodemain{
    int data;
    struct nodemain *next;
}*head;


void insert1(int data)
{
    struct node1 *t, *last1;

    if (head1 == NULL)
    {
        head1 = (struct node1 *)malloc(sizeof(struct node1));
        head1->data = data;
        head1->next = NULL;
        last1 = head1;
    }
    else
    {
        t = (struct node1 *)malloc(sizeof(struct node1));
        t->data = data;
        t->next = NULL;
        last1->next = t;
        last1 = t;
    }
}

void insert2(int data)
{
    struct node2 *t, *last2;

    if (head2 == NULL)
    {
        head2 = (struct node2 *)malloc(sizeof(struct node2));
        head2->data = data;
        head2->next = NULL;
        last2 = head2;
    }
    else
    {
        t = (struct node2 *)malloc(sizeof(struct node2));
        t->data = data;
        t->next = NULL;
        last2->next = t;
        last2= t;
    }
}

void display1()
{
    struct node1 *count = head1;
    while (count)
    {
        printf("   %d  ", count->data);
        count = count->next;
    }
}

void display2()
{
    struct node2 *count = head2;
    while (count)
    {
        printf("   %d  ", count->data);
        count = count->next;
    }
}

void merge(struct node1 *h1,struct node2 *h2)
{
    
    if(h1->data>h2->data)
    {
        struct nodemain *new1,*last;
        while(h1)
        {
            new1=(struct nodemain*)malloc(sizeof(struct nodemain));
            new1->data=h1->data;
            

        }
    }

}

void main()
{
    insert1(1);
    insert1(2);
    insert1(3);
    insert1(4);
    insert1(5);
    insert2(6);
    insert2(7);
    insert2(8);
    insert2(9);
    insert2(10);
    display1(head1);
    printf("\n");
    display2(head2);
    merge(head1,head2);
}