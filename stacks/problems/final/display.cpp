#include<iostream>
#include<stack>

using namespace std;

void display(stack <char > s)
{

    if(s.empty())
    return;

    s.pop();
    display(s);
    cout<<s.top()<<" ";
}
int main()
{
    stack <char> s;
    s.push('I');
    s.push('N');
    s.push('D');
    s.push('I');
    s.push('A');
    display(s);
    return 0;
}