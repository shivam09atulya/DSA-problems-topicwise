#include<bits/stdc++.h>

using namespace std;

stack <int> stack_reverse(stack <int> &s)
{
    int i,stack_size=s.size();
    vector <int> v;
    for(i=0;i<stack_size;i++)
    {
        v.push_back(s.top());
        s.pop();
    }
    for(i=0;i<stack_size;i++)
    {
        s.push(v[i]);
    }
    return s;
}

void display(stack <int > s)
{

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main()
{
    stack <int > s;
    s.push(1);
    s.push(2);
    s.push(3);
    // s.push(4);
    // s.push(5);
    display(s);
    stack_reverse(s);
    display(s);
    return 0;
}