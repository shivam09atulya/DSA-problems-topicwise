#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main()
{
    stack <pair<int ,int>> s1;
    vector <int > v1;

   int  a[]={1,6,4,10,2,5};
    int size=sizeof(a)/sizeof(int)-1,i;

    for(i=0;i<=size;)
    {
        if(s1.empty())
        {
            v1.push_back(-1);
            s1.push({a[i],i});
            i++;
        }

        else if(a[i]>s1.top().first)
        {
            v1.push_back(s1.top().first);
            s1.push({a[i],i});
            i++;
        }

        else
        s1.pop();
    }
    for(i=0;i<size;i++)
    cout<<v1[i]<<" ";
    return 0;
}