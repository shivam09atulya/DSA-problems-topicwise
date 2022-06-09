#include<iostream>

using namespace std;

class node{
    public:
    int data;
    class node *next;
};

class Stack{
    node *top;
    public:
    Stack(){top=NULL;}

    void insert(int data);
    int del_stack();
    void display();
};

void Stack::insert(int data)
{
    if(top==NULL)
    {
        top=new node();
        top->next=NULL;
        top->data=data;
    }
    else
    {node *t;
    t=new node();
    t->data=data;
    t->next=top;
    top=t;}
}

int Stack::del_stack()
{
    if(top==NULL)
    {
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
    int data;
    node *t=top;
    top=top->next;
    return t->data;
    free(t);
    
}

void Stack::display()
{
    node *t=top;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}

int main()
{
    class Stack s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.del_stack();
    s.display();
    return 0;
}