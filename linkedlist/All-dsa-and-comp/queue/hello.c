#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head=NULL;
int init(int w)
{   struct node *last,*t;
    
}
void main()
{   int n,i,w=1;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the numbers and -1 to stop");
    do{
        init(w);
        scanf("%d",&w);
     }while(w!=-1);
}