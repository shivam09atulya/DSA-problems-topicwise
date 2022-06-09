#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

void ngr(int a[],int size)
{
stack <int > s;
vector <int > v;
int i;
for(i=size-1;i>=0;)
{
    if(s.empty())
    {
        s.push(-1);
        v.push_back(-1);
    }
    else if(s.top()>a[i])
    {
        v.push_back(s.top());
        s.push(a[i]);
    }
    else 
    s.pop();
}
reverse(v.begin(),v.end());
for(i=0;i<v.size();i++)
cout<<v[i]<<" ";
cout<<endl;
}

int main()
{
    int a[]={1,3,5,3,2,ff1,4};
    int size=sizeof(a)/sizeof(a);
    ngr(a,size);
    return 0;
}