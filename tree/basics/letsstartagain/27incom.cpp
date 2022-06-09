// Here also we minimize the input by every iteration and finally reach the base value
// After every iteration the input to the function becomes smaller 

#include "tree.h"
int search(int  ino[],int start,int end,int current)
{
    for(int i=start;i<=end;i++)
    {
        if(current==ino[i])
        return i;
    }
    
    return -1;
}


node * builTree(int pre[],int ino[],int start,int end)
{
    static int index=0;

    int current=pre[index++];

    if(start>end)
    return NULL;

    if(start==end)
    return new node(current);

    node *root = new node(current);
    
    int pos=search(ino,start,end,current);


    root->lchild=builTree(pre,ino,start,pos-1);
    root->rchild=builTree(pre,ino,pos,end);

    return root;
}

int main()
{
    int pre[]={1,2,4,5,3,6,8,7};
    int ino[]={4,2,5,1,8,6,3,7};
    node *root;
    root=builTree(pre,ino,0,7);
    display1(root);
    return 0;

}
