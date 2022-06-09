#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
}*head=NULL;
void init()
{
    struct node *last,*t=NULL;
    int n,i;
    printf("Enter the size of linked list = \n");
    scanf("%d",&n);
    printf("Enter the elements = \n");
    head=(struct node *)malloc(sizeof(struct node ));
    scanf("%d",&head->data);
    head->next=NULL;
    head->prev=NULL;
    last=head;
    for(i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node ));
        scanf("%d",&t->data);
        last->next=t;
        t->prev=last;
        last=t;
    }
}
void display(struct node *head)
{
    while(head!=NULL)
    {
        printf(" %d ",head->data);
        head=head->next;
    }
}
void insert(struct node *head)
{
    int i,n,data;
    struct node* p=head,*t;
    printf("Enter the data and position to be inserted = \n");
    scanf("%d",&data);
    scanf("%d",&n);
    if(n==0)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=data;
        t->next=p;
        t->prev=NULL;
        p->prev=t;
    }
    else if(n>0){

        t = (struct node *)malloc(sizeof(struct node));
        t->data = data;
        while(--n)
        {
            p=p->next;
        }
        t->next=p->next;
        t->prev=p;
        p->next->prev=t;
        p->next=t;
    
    }
    else
    return;

}
void sort(struct node *head)
{
    struct node *i=head,*j=head;
    int temp; 
    while(i!=NULL)
    {   j=i;
        while(j!=NULL)
        {
            if(i->data>j->data)
            {
                temp=i->data;
                i->data=j->data;
                j->data=temp;
                j=j->next;
            }
            j->next;
        }
        i=i->next;
    }
}
void reverse(struct node  *head)
{
    struct node *cur = head, *prev = NULL, *next = head->next;
    while (cur->next != NULL)
    {
        cur->next = prev;
        cur->prev = next;
        prev = cur;
        cur = next;
        next = next->next;
    }
 
}
void main()
{
init();
display(head);
reverse(head);
printf("\n");
display(head);
}