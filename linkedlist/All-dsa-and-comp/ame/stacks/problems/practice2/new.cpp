#include<bits/stdc++.h>

using namespace std;
 
 void at_bottom(stack <int> &s,int cur)
 {
     if(s.empty())
     {
         s.push(cur);
         return;
     }

    int topele=s.top();
    s.pop();
    at_bottom(s,cur);
    s.push(topele);
 }


void lets_reverse(stack <int> &s)
{
    
    if(s.empty())
    return;

    int cur=s.top();
    s.pop();
    lets_reverse(s);
    at_bottom(s,cur);
}

void display(stack <int> s)
{
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
}

int main()
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    display(s);
    lets_reverse(s);
    display(s);
    return 0;
}