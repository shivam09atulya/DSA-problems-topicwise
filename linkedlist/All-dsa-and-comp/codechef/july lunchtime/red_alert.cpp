#include<iostream>
#define ll long long int
using namespace std;

void red_alert()
{
    ll N,D,H,A[100],sum=0;
    int i;
    cin>>N>>D>>H;
    for(i=0;i<N;i++)
    cin>>A[i];

    for(i=0;i<N;i++)
    {
        if(A[i]>0)
        {
            sum+=A[i];
        }

        else if(A[i]==0)
        {
            sum-=D;
        }

        else if(A[i]<D)
        {
            sum=0;
        }

        if (sum > H)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;

}

int main()
{
    ll T;
    cin>>T;

    while(T--)
    {
        red_alert();
    }
    return 0;
}

// Test case error-