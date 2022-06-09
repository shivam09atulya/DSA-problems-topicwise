#include <iostream>
#include <stack>

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
    node *head,*last;


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
            node *p = head,*q=head;
            while (p->next != NULL)
            {
                q=p;
                p = p->next;
            }
            q->next=NULL;
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
            cout << p->data <<" ";
            p = p->next;
        }
        cout<<endl;
    }

    // ~linkedlist()
    // {
    //     node *p=head,*q=head;
    //     while (p!=NULL)
    //     {
    //         q=p;
    //         delete(q);
    //         p=p->next;
    //     }
        
    // }
};



int main()
{
    linkedlist *t=new linkedlist();
    linkedlist *m=new linkedlist();
    t->insert(1);
    t->insert(2);
    t->insert(3);
    t->insert(4);
    t->display();
   cout<<t->deletelinked();
   cout<<t->deletelinked();
   cout<<t->deletelinked();
//    cout<<t->deletelinked();
    t->display();
    // t->~linkedlist();
    return 0;
}