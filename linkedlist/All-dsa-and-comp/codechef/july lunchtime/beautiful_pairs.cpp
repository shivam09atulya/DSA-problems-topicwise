#include <iostream>
#define ll long long int
using namespace std;

bool exp(ll i,ll j,ll A[])
{
    if((A[i]-A[j])/A[i] < (A[i]-A[j])/A[j])
    return true;
    else
    return false;
}

void bpairs()
{
    ll N,A[10000],i,j=0;
    int sum=0;
    cin>>N;
    for(i=0;i<N;i++)
    cin>>A[i];

    for(i=0;i<N;i++)
    {   
        for(j=i;j<N;j++)
        {
        if(exp(i,j,A))
        {
            sum++;
        }
        }
    }
    cout<<sum<<endl;
}

int main()
{
    ll T;
    cin>>T;

    while (T--)
    {
        bpairs();
    }
    
    return 0;
}

// NOT able to solve because we need to consider the no behind in the array order of any fixed no
//  Like in 4 2 4  we can input for values 2 and 4(ahead one)   but we cannot traverse to the 4 behind 2 