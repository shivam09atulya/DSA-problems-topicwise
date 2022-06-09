#include<iostream>
#define ll long long int;
using namespace std;

void solve()
{
    long long int D,d,P,Q,n,rem,sum;
     cin >> D >> d >> P >> Q;

     n=D/d;
     rem=D%d;
     long long int a=P,diff=Q;

    sum=(d*n*( (2*a)+(n-1)*Q))/2;
    sum+=rem*(P+Q*n);
    cout<<sum<<" ";
}
int main()
{
    long long int T;

    cin>>T;

    while(T--)
    {
        solve();
    }
}