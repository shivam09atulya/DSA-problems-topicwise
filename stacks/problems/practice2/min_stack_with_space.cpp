#include<bits/stdc++.h>

using namespace std;

int get_min(stack<int> s1)
{
    int min_stack=s1.top(),i;
    for(i=1;i<=s1.size();i++)
    {
    if(s1.empty())
    return -1;
    s1.pop();
    min_stack=min(s1.top(),min_stack);
    }
    return min_stack;
}


int main()
{

    stack <int >s1;
    int i;

    s1.push(18);
    s1.push(19);
    s1.push(29);
    // s1.push(19);
    cout<<get_min(s1)<<endl;
    s1.push(15);
    cout<<get_min(s1)<<endl;
    s1.push(16);
    cout << get_min(s1) << endl;
    return 0;
}