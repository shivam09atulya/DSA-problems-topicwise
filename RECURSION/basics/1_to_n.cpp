#include <bits/stdc++.h>

using namespace std;

void print_n(int n)
{
    if (n == 1)
    {
        cout << "1";
        return;
    }

    cout << n;
    print_n(n - 1);
}
int main()
{
    int n;
    cin >> n;
    print_n(n);
    return 0;
}