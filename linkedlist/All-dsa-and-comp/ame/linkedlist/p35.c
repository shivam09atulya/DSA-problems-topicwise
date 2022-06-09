#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *head = NULL, *last=NULL;

void insertdouble(int data)
{
    struct node *t;
    if(head==NULL)
    {
        head=(struct node*)malloc(sizeof(struct node));
        head->data=data;
        head->next=NULL;
        last=head;
    }
    else{
        t=(struct node*)malloc(sizeof(struct node));
        t->data=data;
        t->next=head;
        last->next=t;
        last=t;
    
    }

}

void displaydouble(struct node *h)
{
    do{
        printf("\t %d",h->data);
        h=h->next;

    }while(h!=head);

}


struct node *middle(struct node *h,int *count)
{
    struct node *fast=h,*slow=h;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        count++;
    }
    return slow;
}

void split(struct node *h)
{
    if(head==NULL)
    return;
    int count;
    struct node *mid,*nexttomid;
    mid=middle(h,&count);
    if(count%2)
    {
        nexttomid=mid->next;
        mid->next=head;      
        last->next=nexttomid;  
    }
    else if(!count%2)
    {
        mid=mid->next;
        nexttomid=mid->next;
        mid->next=head;
        last->next=nexttomid;
    }
    printf("First linked list\n");
    displaydouble(head);
    printf("Second linked list\n");
    displaydouble(nexttomid);

}

void main()
{
    insertdouble(1);
    insertdouble(2);
    insertdouble(3);
    insertdouble(4);
    insertdouble(5);
    displaydouble(head);
    split(head);
}