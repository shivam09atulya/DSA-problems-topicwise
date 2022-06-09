#include<iostream>

using namespace std;

class twoarraystack{

    int *arr;
    int top1;
    int top2;
    int size;
    public:

    twoarraystack(int n)
    {
        size=n;
        arr=new int[n];
        top1=n/2;
        top2=n/2+1;
    }

    void push1(int x)
    {
        if(top1>=0)
        {
            arr[--top1]=x;
        }
        else 
        {
            cout<<"Stack Overflow!!!";
            return;
        }
    }

    void push2(int x)
    {
        if(top2<size)
        {
            arr[++top2]=x;
        }
        else 
        {
            cout<<"Stack Overflow!!!";
            return;
        }
    }

    int pop1()
    {
        if(top1<=size/2)
        {
            return arr[top1];
        }
        else 
        {
            cout<<"Stack Underflow";
            return INT_MIN;
        }
    }

    int pop2()
    {
        if(top2>size/2)
        {
            return arr[--top2];
        }
        else{
            cout<<"Stack Underflow";
            return INT_MIN;
        }
    }
    void display()
    {
        int dis1=top1,dis2=top2;

        cout<<"First Stack"<<endl;
        int i;
        for(i=top1;i<size/2;i++)
        cout<<"  "<<arr[i];
        cout<<endl;

        cout<<"Second Stack"<<endl;
        for(i=top2;i>size/2+1;i--)
        cout<<" "<<arr[i];
        cout<<endl;
    }
};


int main()
{
    twoarraystack obj(20);
    obj.push1(1);
    obj.push1(2);
    obj.push1(3); 
    obj.push1(4); 
    obj.push1(5); 
    obj.push1(6); 
    obj.push2(4);
    obj.push2(5);
    obj.push2(5);
    obj.push2(5);
     obj.pop1();
     obj.pop2();
    obj.display();

    return 0;
}