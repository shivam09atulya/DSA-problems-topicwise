#include<iostream>
#include<stack>
#include<vector>

using namespace std;

void display(stack <char> s)
{
    if(s.empty())
    return;

    s.pop();
    display(s);
    cout << s.top();
}

void repeat(char a[],int size)
{
    int i;
    stack <char > s,s1;
    for(i=0;i<size;i++)
    {
        if(s.empty())
        s.push(a[i]);

        else if(a[i]==s.top())
       s. pop();

        else 
       s. push(a[i]);
    }

    while(!s.empty())
    {
        s1.push(s.top());
        s.pop();
    }

    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
}


int main()
{
    char a[]={"mississippi"};
    int size=sizeof(a)/sizeof(a[0]);
    repeat(a,size);
    return 0;
}