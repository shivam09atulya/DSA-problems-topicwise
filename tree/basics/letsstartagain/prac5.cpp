#include "tree.h"

    int search(int ino[],int current ,int start , int end)
    {

        for(int i =start;i<=end;i++)
        {
            if(current==ino[i])
            return i;
        }
        return -1;
    }

    node *create_tree(int ino[],int pre[],int start,int end)
    {
      
       if(start>end)
       return NULL;

      int static preindex=0;
       node *root=new node(pre[preindex++]);

        if(size<preindex)
        return NULL;
       if(start==end)
       return root;

       int pos = search(ino, root->data, start, end);


       root->lchild = create_tree(ino, pre, 0, pos - 1);
       root->rchild = create_tree(ino, pre, pos, end);

       return root;

    }

    int main()
    {
        int ino[]={4,2,5,1,6,3};
        int pre[]={1,2,4,5,2,6};
       const int size=sizeof(ino)/sizeof(ino[1]);

        node *root=create_tree(ino,pre,0,size-1);
        display1(root);
        return 0;
    }

    /*
    In these types of problems the basic concept of recursion is same and that is applying the same step with smaller inputs
        Here also we first create the root node and then same processes for its left and right nodes
        1  (this is first created)
       / \ 
       so
       on
    */ 