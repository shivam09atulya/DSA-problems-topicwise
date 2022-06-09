 #include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

class MinStack
{
public:
    stack<int> s;
    stack<int> ss;

    void push(int val)
    {
        if (ss.empty() || ss.top() >= val)
        {
            s.push(val);
            ss.push(val);
        }
        else
            s.push(val);
    }

    void pop()
    {
        if (ss.top() == s.top())
            ss.pop();
        s.pop();
    }

    int top()
    {
        return s.top();
    }

    int getMin()
    {
        return ss.top();
    }
};

int main()
{
    MinStack  *minStack =new MinStack();
    minStack->push(0);
    minStack->push(1);
    minStack->push(0);
    cout<<minStack->getMin()<<endl; 
    minStack->pop();
    cout<<minStack->top()<<endl;    
    cout<<minStack->getMin()<<endl; 
}