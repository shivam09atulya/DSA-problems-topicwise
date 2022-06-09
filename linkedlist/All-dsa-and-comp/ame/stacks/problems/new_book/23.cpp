#include<iostream>
#include<stack>

using namespace std;
class node{
    public:
    int data;
    node *next;
};

class linkedlist{
    private:
    node *head;
    node *last;

    public:
    linkedlist(){head=NULL;last=NULL;}

    void insert(int data)
    {
        if(head==NULL)
        {
            head=new node();
            head->data=data;
            head->next=NULL;
            last=head;
        }

        else 
        {
            node *t=new node();
            t->data=data;
            t->next=NULL;
            last->next=t;
            last=t;
        }
    }

    int deletelinked()
    {
        if(head==NULL)
        return -1;

        else 
        {
            node *p=head;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            int data=p->data;
            delete(p);
            return data;
        }

    }

    void display()
    {
        node *p=head;
        while(p->next!=NULL)
        {
            cout<<p->data;
            p=p->next;
        }
    }

};

int main()
{
    linkedlist *t;
    t->insert(1);
    t->insert(2);
    t->insert(3);
    t->insert(4);
    t->display();
    return 0;
}