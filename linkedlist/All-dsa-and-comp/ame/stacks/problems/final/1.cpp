#include<iostream>
#include<stack>
using namespace std;

void checker(char a[],int size)
{
    int i;
    stack <char > s;
    for(i=0;i<size;i++)
    {
        if(a[i]=='{'||a[i]=='('||a[i]=='[')
        s.push(a[i]);

        else if (a[i] == '}' || a[i] == ')' || a[i] == ']')
        s.pop();

    }
    if(s.empty())
    cout<<"Balanced";
    else 
    cout<<"Not Balanced";
}


int main()
{
    char a[]={"(a+b"};
    int size=sizeof(a)/sizeof(a[0]);
    checker(a,size);
    return 0;
}