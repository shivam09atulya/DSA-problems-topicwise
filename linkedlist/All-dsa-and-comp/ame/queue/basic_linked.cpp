#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};


class Queue{
    public:
    node *front,*rear;
    Queue(){
        front=rear=NULL;
    }
    void enque(int x);
    bool isEmpty();
    int deque();
    void display();
};

bool Queue::isEmpty()
{
    return rear == NULL;
}

void Queue::enque(int x)
{
    if(rear==NULL)
    {
        rear=new node();
        rear->data=x;
        rear->next=NULL;
        front=rear;
    }
    else{
        node *t=new node();
        t->data=x;
        t->next=NULL;
        rear->next=t;
        rear=t;
    }
}

int Queue::deque()
{
    if(isEmpty())
    {
        cout<<"Queue is Empty"<<endl;
        return -1;
    }
    else 
    {
     
        node *p=front;
        front=front->next;
        int data=p->data;
        free(p);
        return data;
    }
}

void Queue::display()
{
node *p=front;

while(p!=NULL)
{
    cout<<p->data<<" ";
    p=p->next;
}
cout<<endl;
}


int main()
{

    class Queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.enque(5);
     q.deque();
    q.display();
        return 0;
}