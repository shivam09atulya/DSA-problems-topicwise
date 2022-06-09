#include<iostream>

using namespace std;

class node{
    public:
    node *lchild;
    int data;
    node *rchild;

    node();
    node(int val);
};

node ::node():data(0),lchild(NULL),rchild(NULL){}
node ::node(int val)
{
    data=val;
    rchild=lchild=NULL;
}
    class bst{
        node *root;
        public:

         node* insert(node *root,int val);
         void display(node *root);
         node *search(node *root,int val);
         node *dele(node *root,int val);
    };

    node *bst::insert(node *root,int val)
    {
        if(root==NULL)
        return new node(val);

        else if(val>root->data)
        root->rchild=insert(root->rchild,val);

        else
        root->lchild=insert(root->lchild,val);

        return root;
    }

    void bst::display(node *root)
    {   
        if(root)
       { display(root->lchild);
        cout<<root->data<<" ";
        display(root->rchild);}
    }

    node *bst::search(node * root,int val)
    {
        if(root==NULL)
        cout<<"Does not exists"<<endl;

        else if(root->data<val)
        root->rchild=search(root->rchild,val);

        else if(root->data>val)
        root->lchild=search(root->lchild,val);

        else
        cout<<"Exist"<<endl;

        return root;
    }

    node *inordersucc(node *root)
    {
        node *temp=root;
        while(temp && temp->lchild!=NULL)
        temp=temp->lchild;
        return temp;
    }

    node *bst::dele(node *root,int val)
    {
        search(root,val);
        if(root->data<val)
        root->rchild=dele(root->rchild,val);

        else if(root->data>val)
        root->lchild=dele(root->lchild,val);

        else{
            if(root->rchild==NULL)
            {
                node *temp=root->lchild;
                free(root);
                return temp;
            }

            else if(root->lchild==NULL)
            {
                node *temp=root->rchild;
                free(root);
                return temp;
            }

            else 
            {
                node *temp=inordersucc(root->rchild);
                root->data=temp->data;
                root->rchild=dele(root,val);
            }
        }
        return root;
    }


//     int main()
//     {
//        node *root=new node(10);
//        bst b;
//        b.insert(root,5);
//        b.insert(root,6);
//        b.insert(root,7);
//        b.insert(root,8);
//        b.insert(root,1);
//        b.display(root);cout<<endl;
//     //    b.search(root,11);
//     //    b.search(root,6);
//     //    b.search(root,10);
//     //    b.search(root,12);
//     //    root=b.dele(root,6);
//     //    root=b.dele(root,1);
//     //    root=b.dele(root,5);
//     //     // root=b.dele(root,);
//     //     root=b.dele(root,8);
//     //     root=b.dele(root,10);
//     root=b.dele(root,100);
//        b.display(root);
//        return 0;
//    }
   