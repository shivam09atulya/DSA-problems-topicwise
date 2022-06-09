#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
}*head=NULL,*last=NULL;

void insert(int data)
{

    if(head==NULL)
    {
        head=new node();
        head->data=data;
        head->next=NULL;
        last=head;
    }
    else {
        node *t=new node();
        t->data=data;
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct node *p)
{
    while (p!=NULL)
    {
        cout<<p->data;
        p=p->next;
    }
    

}

int main()
{
    
    insert(1);  
    insert(3);  
    insert(4);  
    insert(5);
    display(head);  
    display(head);  
    return 0;
}