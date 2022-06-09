#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[10], n, i, sum = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        cout << sum;
    }

    return 0;
}