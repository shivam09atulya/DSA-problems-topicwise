#include<bits/stdc++.h>
using namespace std;
#define fat                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
int main()
    {
    long long int t,a, b, i, j, w;
    
    cin >> t;
    while (t--)
    {w=0;
        cin>>a >> b;
        for (i = 1; i <= a; i++)
        {
            for (j = 1; j <= b; j++)
            {
                if ((i + j) % 2 == 0)
                    w++;
            }
        }
        cout << w;
        cout<<endl;
}
return 0;
}
