#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
}*head=NULL,*last=NULL;

void insert(struct node *h,int data)
{
    struct node *t=NULL;
    if(head==NULL)
    {
        head=new node;
        head->next=NULL;
        head->data=data;
        last=head;
    }
    else{
        t=new node();
        t->next=NULL;
        t->data=data;
        last->next=t;
        last=t;
    }
}

void display(struct node *h)
{
    while(h!=NULL)
    {
        cout<<"\t"<<h->data;
        h=h->next;
    }
}
int main()
{
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    display(head);
    return 0;
}