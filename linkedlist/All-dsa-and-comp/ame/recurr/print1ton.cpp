#include<iostream>

using namespace std;

int print(int n)
{

    if(n==1){
        cout<<1;
    return 1;}

    print(n-1);
    cout<<" "<<n;
}

int main()
{
    print(5);
    return 0;
}