#include<iostream>
#include<stack>
#include<vector>

using namespace std;
int main()
{
    stack <pair<int,int>>s;
    vector<int>v;

    int a[]={100,80,60,70,60,75,85},i;
    for (i;i<sizeof(a)/sizeof(int);)
    {
        if(s.empty())
        {
            v.push_back(-1);
            s.push({a[i],i});
            i++;
        }

        else if(s.top().first>a[i])
        {
            v.push_back(s.top().second);
            s.push({a[i],i});
            i++;
        }
        else
        s.pop();
    }
    for(i=0;i<v.size();i++)
    {
        cout<<" "<<i-v[i];
    }
    
    return 0;
}