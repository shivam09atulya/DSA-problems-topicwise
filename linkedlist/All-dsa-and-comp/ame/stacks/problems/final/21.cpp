#include<iostream>
#include<stack>
#include<vector>

using namespace std;

void  gtr(int a[],int size)
{
    stack <pair<int,int>> s;
    vector <int > v; 
    int i;
    for(i=0;i<size;)
    {   
        if(s.empty())
        {
            s.push({a[i],i});
            v.push_back(-1);
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
    int diff[100];
    for(i=0;i<size;i++)
    {
        diff[i]=i-v[i];
    }

    for(i=0;i<size;i++)
    cout<<diff[i]<<" ";
}

int main()
{
    int a[]={6,3,4,5,2};
    int size=sizeof(a)/sizeof(int);
    gtr(a,size);

    return 0;
}