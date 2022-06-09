#include <iostream>
using namespace std;

#define n 10
class stack{

    int *array;
    int top;
    public:
    stack()
    {
        array=new int[n];
        top=-1;
    }

    void push(int data)
    {
        if(top==n-1)
        {
            cout<<"Stack Overflow!!!"<<endl;
        }
        else
        array[++top]=data;
    }

    int pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow!!!"<<endl;
            return -1;
        }
        else
        return array[top--];
    }

    bool isEmpty()
    {
        if(top==-1)
        return true;
        else 
        return false;
    }

    int peek(int x)
    {
        if(isEmpty())
        return -1;

        return  array[top-x];
    }

    void display()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<" "<<array[i]<<" ";
        }
    }

};

int main()
{
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.pop();
    s1.display();
    return 0;
}