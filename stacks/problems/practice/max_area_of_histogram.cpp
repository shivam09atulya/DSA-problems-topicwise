#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
    stack <pair<int ,int>> s1,s2;
    vector <int>v1,v2;
    int a[]={6,2,5,4,5,1,6};
    int size=sizeof(a)/sizeof(int),i;

    for(i=0;i<size;)
    {
        if(s1.empty())
        {
            v1.push_back(-1);
            s1.push({a[i],i});
            i++;
        }

        else if(a[i]>s1.top().first)
        {
            v1.push_back(s1.top().second);
            s1.push({a[i],i});
            i++;
        }
        else 
        s1.pop();
    }

    for(i=0;i<size;i++)
    cout<<" "<<v1[i];

    printf("\n");

    for(i=size;i>0;)
    {
        if(s2.empty())
        {
            v2.push_back(7);
            s2.push({a[i],i});
            i--;
        }

        else if(a[i]<s2.top().first)
        {
            v2.push_back(s2.top().second);
            s2.push({a[i],i});
            i--;
        }

        else 
        s2.pop();
    }

    reverse(v2.begin(),v2.end());
    for(i=0;i<size;i++)
    cout<<" "<<v2[i];
    return 0;
}