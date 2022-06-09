#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    stack <int> s;
    vector<int >v;

    int a[]={4,8,5,2,25},i,size;

    size=sizeof(a)/sizeof(int);
    for(i=size;i>=0;)
    {
        if(s.empty())
        {
            v.push_back(-1);
            s.push(a[i--]);
        }

        else if(a[i]>s.top())
        {
            v.push_back(s.top());
            s.push(a[i--]);
        }
        
        else
        s.pop();
    }

    reverse(v.begin(),v.end());
    for(i=0;i<size;i++)
    cout<<" "<<v[i];

    return 0;
}