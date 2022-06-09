#include "bst.h"

int countthis =0;
int count(node *root)
{
node *p=root;

    if(p)
    {
        count(p->lchild);
        countthis++;
        count(p->rchild);
    }
}

int main()
{
    node *root=new node();
    root=NULL;
    bst b;
    root=b.insert(root,20);
    b.insert(root,50);
    b.insert(root,30);
    b.insert(root,60);
    b.insert(root,70);
    b.insert(root,70);
    b.insert(root,70);
    b.insert(root,70);
    b.insert(root,70);
    b.insert(root,70);
    b.insert(root,70);
    b.insert(root,70);
    b.insert(root,70);
    b.insert(root,70);
    b.insert(root,70);
    b.insert(root,70);
    b.insert(root,70);
    b.insert(root,70);
    b.display(root);
    count(root);
    cout<<"Count of this is "<<countthis<<endl;

}