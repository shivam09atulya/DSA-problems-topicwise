#include<iostream>
#include<queue>
#include<vector>

using namespace std;

void max_q(queue <int  > q,vector <int> &v)
{
    int max=q.front();
    q.pop();
    while(!q.empty())
    {
        if(max<q.front())
        max=q.front();
        q.pop();
    }
    v.push_back(max);
}


void window(int a[],int size,int gap)
{
    vector <int > v;
    queue <int > q;
    int max,i=0;
    while(gap--)
    q.push(a[i++]);
    max_q(q,v);
    while(i<size)
    {
        q.push(a[i++]);
        q.pop();
        max_q(q,v);
    }

for(i=0;i<v.size();i++)
cout<<v[i]<<" ";
cout<<endl;

}

int main()
{
    int a[]={1,3,-1,-3,5,3,6,7};
    int gap;
    int size=sizeof(a)/sizeof(a[0]);
    window(a,size,3);
    return 0;
}