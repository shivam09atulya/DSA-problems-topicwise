#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5],i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];


        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout <<a[i][j];
            cout<<endl
        }
    }

    return 0;
}