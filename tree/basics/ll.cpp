#include<iostream>
using namespace std;
class node{
    public:
    int data;
    class node *next;
    node();
    node(int val);
};
node::node():data(0),next(NULL){}
node::node(int val)
{
    data=val;
    next=NULL;
}


    class linkedlist{
        public:
        node *head,*last;
        linkedlist()
        {
            head=last=NULL;
        }
        void insert(int val);
        void display();
        int del();
    };

        void linkedlist::insert(int val)
        {
            if(head==NULL)
            {
                head=new node(val);
                last=head;
            }
            else
            {
                node *temp=new node(val);
                last->next=temp;
                last=temp;
            }
        }

        void linkedlist::display()
        {
            node *temp=head;
            while(temp!=NULL)
            {
                cout<<" "<<temp->data;
                temp=temp->next;
            }
            cout<<endl;
        }

    int linkedlist::del()
    {
        node *p,*q;
        p=q=head;
        int val;
        while(p!=NULL)
        {
            q=p;
            p=p->next;
        }
        val=p->data;
        q->next=NULL;
        free(p);
        return val;
    }

    int main()
    {
        linkedlist *t=new linkedlist();
        t->insert(1);
        t->insert(2);
        t->insert(3);
        t->insert(4);
        t->insert(5);
        t->insert(6);
        t->display();
        cout<<t->del();
        t->display();

    }