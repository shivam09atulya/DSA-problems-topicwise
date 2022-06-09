#include<iostream>
#include<stack>

using namespace std;

void consecutive(int a[],int size)
{
    stack <int > s;
    int i;
    if (size%2!=0)
    size=size-1;
    for(i=0;i<size;i++)
    {
        if(s.empty())
        s.push(a[i]);

        else if(s.top()==(a[i]+1))
            s.pop();

        else if(s.top()==(a[i]-1))
            s.pop();
        else
        s.push(a[i++]);
    }
    if(s.empty())
    cout<<"All consecutive";
    else
    cout<<"Not consecutive";
}

int main()
{
    int a[]={4,5,-2,-3,11,1,5,6,20};
    int size=sizeof(a)/sizeof(a[0]);
    consecutive(a,size);
    return 0;
}