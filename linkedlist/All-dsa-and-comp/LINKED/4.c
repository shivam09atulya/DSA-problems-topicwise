#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *rnext;
    struct node *lnext;
}*first=NULL;

void init()
{   int n,i;
struct node *t,*last=first;
    printf("Enter the size = ");
    scanf("%d",&n);
    first=(struct node*)malloc(sizeof(struct node));
    printf("Enter elements = ");
    for(i=0;i<n;i++)
    {
    t=(struct node*)malloc(sizeof(struct node));
    scanf("%d",t->data);
    t->rnext=NULL;
    last->rnext=t;
    last=t;

    }

}
void rdisplay(struct node *p)
{
while(p!=0)
{
    p=p->rnext;
}

}
void ldisplay(struct node *p)
{
while(p!=0)
{
    p=p->lnext;
}

}
void main()
{
    init();
    rdisplay(first);
    ldisplay(first);
}
