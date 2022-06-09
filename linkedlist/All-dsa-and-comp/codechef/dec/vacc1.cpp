#include <bits/stdc++.h>
using namespace std;
#define fat ios_base::sync_with_stdio(false); cin.tie(0);
int main() {
    int d1,d2,v1,v2,p,d=0;
    cin>>d1>>v1>>d2>>v2>>p;
    if(d1==d2)
    {
        while(!((v1+v2)*d>=p))
        {
        d++;
        }
        cout<<d1-1+d;
        return 0;
    }
    else if(d1>d2)
    {
        while(!(((d1-d2)*v2+(v1+v2)*d)>=p))
        {
            d++;
        }
        cout << d1+d-1;
            }
    else if (d2 > d1)
    {
        while (!(((d2 - d1) * v1 + (v1 + v2) * d) >= p))
        {
            d++;
        }
        cout << d2+d-1;
    }

    return 0;
}
