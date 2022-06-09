#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node* newnode(int data)
{
    struct node *node =(struct node *)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return(node);
}
void printInoder(struct node *node)
{
    if(node ==NULL)
    return;
    
    printInoder(node->left);
    printf(" %d ",node->data);
    printInoder(node->right);
}
void printPreoder(struct node *node)
{
    if(node==NULL)
    return;
    printf(" %d ",node->data);
    printPreoder(node->left);
    printPreoder(node->right);
}
void printPostoder(struct node *node )
{
    if(node ==NULL)
    return;
    printPostoder(node->left);
    printPostoder(node->right);
    printf(" %d ",node->data);
}
void search(struct node *node)
{
    int x;
    
    if(node==NULL)
    return;

    printf("Enter the data to be serach = ");
    scanf("%d",&x);


    search(node->left);
    search(node->right);
}
void print()
{
      int i=0;
   printf("Enter the numbers =\n");
    for(i=1;i<6;i++)
    {
        printf("\n %d",i);
    }

}
void main()
{   
    print();
    struct node *root =newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);

    printf("\n Inoder transversal of binary tree is \n ");
      printInoder(root);
    printf("\nPreoder transversal of binary tree is \n");
    printPreoder(root);
    printf("\nPostoder transversal of binary tree is \n");
    printPostoder(root);
      
}