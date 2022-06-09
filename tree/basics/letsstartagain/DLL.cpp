#include <iostream>

using namespace std;

class node{
    public:
    int data;
    class node *left;
    class node *right;

    node();
    node (int val)
    {
        data=val;
        left=right=NULL;
    }
};

class dll{
   
    public:

    node * insert(node *head,int val);
};

node * dll::insert(node *head,int val)
{
    if(!head) return new node(val);

    else
    {
        node *temp=new node(val);
        while(head->right!=NULL)
        {
            head=head->right;
        }
        head->right=temp;
        temp->left=head;
        return head;

    }

}

void display(node *head)
{
    while(head!=NULL)
    {
        cout<<" "<<head->data;
        head=head->right;
    }
    cout<<endl;
}

void display1(node *head)
{
    while (head->right != NULL)
    {
        head = head->right;
    }

    while(head!=NULL)
    {
        cout<<" "<<head->data;
        head=head->left;
    }

    cout<<endl;
}

int main()
{

    node *head=new node(5);
    dll d;

    d.insert(head,4);
    d.insert(head,2);
    d.insert(head,3);
    d.insert(head,9);
    display(head);
    display1(head);
    return 0;
}