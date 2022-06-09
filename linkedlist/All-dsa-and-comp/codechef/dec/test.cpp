#include <iostream>
using namespace std;
int func(int d1, int d2, int v1, int v2, int P)
{
    int t;
    if (d1 <= 0)
    {
        t = v2;
    }
    if (d2 <= 0)
    {
        t = v1;
    }
    if (d1 > 0 && d2 > 0)
    {
        t = v1 + v2;
    }
    //cout<<v1<<v1<<"\n";
    int days = 0;
    if (P % t != 0)
    {
        days = ((P / t) + 1);
    }
    if (P % t == 0)
    {
        days = (P / t);
    }
    //cout<<t<<"\n";
    return days;
}
int main()
{
    // your code goes here
    int d1, v1, d2, v2, P;
    int l;
    int days;
    cin >> d1 >> v1 >> d2 >> v2 >> P;
    int x;

    if (P <= 0 || (v1 <= 0 && v2 <= 0) || (d1 <= 0 && d2 <= 0))
    {
        days = 0;
    }
    else if (d1 > d2)
    {
        if (d1 > 100)
        {
            d1 = 100;
        }
        if (d2 > 100)
        {
            d2 = 100;
        }
        if (v1 > 100)
        {
            v1 = 100;
        }
        if (v2 > 100)
        {
            v2 = 100;
        }
        if (P > 1000)
        {
            P = 1000;
        }
        if (d2 <= 0)
        {
            l = func(d1, d2, v1, v2, P);
            cout << l << "\n";
        }
        else
        {
            x = d1 - d2;
            int tv1;
            tv1 = (x * v2);
            P = (P - tv1);
            if (d2 != 1)
            {
                x = (x + (d2 - 1));
            }

            d2 = d1;
            l = func(d1, d2, v1, v2, P);
            l = l + x;
        }
    }
    else if (d1 == d2)
    {
        if (d1 > 100)
        {
            d1 = 100;
        }
        if (d2 > 100)
        {
            d2 = 100;
        }
        if (v1 > 100)
        {
            v1 = 100;
        }
        if (v2 > 100)
        {
            v2 = 100;
        }
        if (P > 1000)
        {
            P = 1000;
        }
        l = func(d1, d2, v1, v2, P);
        if (d2 != 1)
        {
            l = (l + (d2 - 1));
        }
    }
    if (d2 > d1)
    {
        if (d1 > 100)
        {
            d1 = 100;
        }
        if (d2 > 100)
        {
            d2 = 100;
        }
        if (v1 > 100)
        {
            v1 = 100;
        }
        if (v2 > 100)
        {
            v2 = 100;
        }
        if (P > 1000)
        {
            P = 1000;
        }
        if (d1 <= 0)
        {
            //cout<<v1<<v2<<"\n";
            l = func(d1, d2, v1, v2, P);
            //cout<<l<<"\n";
        }
        else
        {
            x = d2 - d1;
            int tv1;
            tv1 = (x * v1);
            P = (P - tv1);
            if (d1 != 1)
            {
                x = (x + (d1 - 1));
            }
            d1 = d2;
            l = func(d1, d2, v1, v2, P);

            l = l + x;
        }
    }
    cout << l << "\n";

    return 0;
}
