#include<iostream>

using namespace std;

int main()
{
    long int T;

    cin>>T;
 
    while(T--)
    {
        int xa, xb, Xa, Xb;
        cin>>xa;
        cin>>xb;
        cin>>Xa;
        cin>>Xb;

        cout<<(Xa/xa+Xb/xb)<<" ";
    }
    return 0;
}