#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
    stack <pair<int,int>>s1,s2;
    vector <int > v1,v2;
    
    int a[]={6, 2, 5, 4, 5, 1, 6};
    int size=sizeof(a)/sizeof(int)-1,i;

    //Nearest smaller to left 
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
            v1.push_back(s1.top().second);
            s1.push({a[i],i});
            i++;
        }

        else 
        s1.pop();
    }
    for(i=0;i<=size;i++)
    cout<<"\t"<<v1[i]<<"\t";
    cout<<endl;

    // Nearest smaller to right
    for (i = size; i >= 0;)
    {
        if (s2.empty())
        {
            v2.push_back(7);
            s2.push({a[i], i});
            i--;
        }

        else if (a[i] > s2.top().first)
        {
            v2.push_back(s2.top().second);
            s2.push({a[i], i});
            i--;
        }

        else
            s2.pop();
    }
    reverse(v2.begin(),v2.end());
    for(i=0;i<=size;i++)
    cout<<"\t"<<v2[i]<<"\t";
    cout<<endl;

    int v3[10],v4[10];

    for(i=0;i<=v1.size();i++)
    v3[i]=v2[i]-v1[i]-1;
    
    
    for(i=0;i<=v1.size();i++)
    v4[i]=a[i]*v3[i];

    for(i=0;i<=size;i++)
    cout<<" "<<v4[i]<<endl;

    int high=v4[0];
    for(i=0;i<=size;i++)
    {
        if(v4[i]>high)
        high=v4[i];
    }

    cout<<"Largest Area is = "<<high<<endl;
        return 0;
}