#include <iostream>
#include <stack>
#include<algorithm>

using namespace std;
class node
{
public:
    int data;
    node *next;
};

class linkedlist
{
public:
    node *head, *last;

    linkedlist()
    {
        head = NULL;
        last = NULL;
    }

    void insert(int data)
    {
        if (head == NULL)
        {
            head = new node();
            head->data = data;
            head->next = NULL;
            last = head;
        }

        else
        {
            node *t = new node();
            t->data = data;
            t->next = NULL;
            last->next = t;
            last = t;
        }
    }

    int deletelinked()
    {

        if (head == NULL)
            return -1;

        else
        {
            node *p = head, *q = head;
            while (p->next != NULL)
            {
                q = p;
                p = p->next;
            }
            q->next = NULL;
            int data = p->data;
            delete (p);
            return data;
        }
    }

    void display()
    {
        node *p = head;
        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }

    ~linkedlist()
    {
        node *p=head,*q=head;
        while (p!=NULL)
        {
            q=p;
            delete(q);
            p=p->next;
        }

    }
};

int count(linkedlist *head)
{
    int count=0;
    while(head->head!=NULL)
    {
        count++;
        head->head=head->head->next;
    }
    return count;
}

int get_conn(linkedlist *head1,linkedlist *head2,int diff)
{
    linkedlist *p=head1,*q=head2;
    while(diff--)
    {
        p->head=p->head->next;
    }
    while(p->head!=NULL && q->head!=NULL)
    {
        if(p->head==q->head)
        {
        cout<<" " <<p->head->data<<endl;
        return p->head->data;
        }
        p->head=p->head->next;
        q->head=q->head->next;
    }
    return -1;
}

int find_conn(linkedlist *head1,linkedlist *head2)
{
int diff,c1,c2;

    c1=count(head1);
    c2=count(head2);
    if(c1>c2)
    {
        diff=c1-c2;
        return get_conn(head1,head2,diff);
    }
    else if(c2>c1)
    {
        diff=c2-c1;
        return get_conn(head2,head1,diff);
    }

    else 
    {
        return get_conn(head1,head2,diff);
    }
    
}



int main()
{
    linkedlist *head1 = new linkedlist();
    linkedlist *head2 = new linkedlist();
    head1->insert(3);
    head1->insert(6);
    head1->insert(9);
    head1->insert(15);
    head2->insert(10);
    head2->head->next=head1->head->next->next->next;
    // head1->insert(15);
    head1->insert(30);
    head1->display();
    head2->display();
    cout<<"The connecting node is = "<<find_conn(head1,head2);
    return 0;
}