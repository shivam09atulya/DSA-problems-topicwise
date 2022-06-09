#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;
void init()
{
    struct node *last=NULL,*t=NULL;
    int n,i;
    printf("Enter the size = \n");
    scanf("%d",&n);
    head=(struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    last=head;
    printf("Enter elements = \n");
    scanf("%d",&head->data);
    for(i=0;i<n-1;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->next=NULL;
        scanf("%d",&t->data);
        last->next=t;
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
    printf("\n");
}
void reverse()
{
    struct node *cur=head,*prev=NULL,*next=head;
    while(cur!=NULL)
    {
        next=cur->next;
        cur->next=prev;
        prev = cur;
        cur=next;
    }
    head=prev;;
}
void palin(struct node *head)
{
    
}
void main()
{
    init();
    display(head);
    palin(head);
    //reverse(head);
    display(head);

}