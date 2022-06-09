#include<iostream>

#define max 10000
using namespace std;
class Stack{
    int top;

    public:
    int a[max];
    Stack(){top=-1;}

    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    void display();
    void direct_dis();
};

bool Stack::push(int x)
{
    if(top>max)
    {
        cout<<"Stack Overflow"<<endl;
        return false;
    }
    else 
    {
        a[++top]=x;
        return true;
    }
}

int Stack::pop()
{
    if(top<0)
    {
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
    else 
    {
        int x=a[top--];
        return x;
    }

}

int Stack::peek()
{
    if(top<0)
    {
        cout<<"Stack is Empty"<<endl;
        return -1;
    }
    else 
    {
        return a[top];
    }
}

bool Stack:: isEmpty()
{
    return (top<0);
}

void Stack::direct_dis()
{
    if(isEmpty())
    {cout<<"Stack is Empty"<<endl;
    return;
    }

    else{
        int i;
        for(i=0;i<top;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }

}

void Stack::display()

{
    if(isEmpty())
    {
        cout<<"Stack is Empty "<<endl;
        return;
    }
    else{
        int i;
        for(i=top-1;i>=0;i--)
        cout<<a[i]<<" ";
        cout<<endl;
    }
}

int main()
{
   class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();
    s.direct_dis();
    return 0;
}