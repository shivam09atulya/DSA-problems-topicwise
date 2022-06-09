#include<iostream>

#define ll long long int
using namespace std;

void spell()
{
    ll A=0,B,C;

    cin>>A>>B>>C;

    if(A>B && C>B)
    cout<<A+C;
    

    else if(B>C && A>C)
    cout<<B+A;

    else if(C>A && B>A)
    cout<<C+B;

    else if(A==B)
    cout<<A+C;

    else if(C==B)
    cout<<A+B;

    else if(A==C)
    cout<<A+B;

  

    cout<<endl;
}

int main()
{
    ll T;
    cin>>T;

    while (T--)
    {
        spell();
    }
    
    return 0;
}