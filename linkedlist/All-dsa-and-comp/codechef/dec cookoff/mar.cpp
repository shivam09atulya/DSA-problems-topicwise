#include<bits/stdc++.h>
using namespace std;
#define fat                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
int main()
{
    int t,b[120],i;
    cin>>t;
    while(t--)
    {
        int sum=0,a=0,d=0,n;
        cin>>n;
        for(i=0;i<120;i++)
        {
            b[i]=0;
        }
        for(i=0;i<n;i++)
        {
        cin>>b[i];
        sum+=b[i];
        }
       a=(sum+(120-n));
        d=(a*100/120);
       if(a>75)
       cout<<"YES";

       else
        cout<<"NO";
       
    }
  return 0;
}