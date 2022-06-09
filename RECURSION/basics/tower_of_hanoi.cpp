#include <bits/stdc++.h>

using namespace std;

void solve(char s, char d, char h, int n, int &count)
{

    if (n == 0)
    {
        return;
    }

    solve(s, h, d, n - 1, count);
    cout << " Moving disk " << n << " from " << s << " to " << d << endl;
    count++;
    solve(h, d, s, n - 1, count);
}
int main()
{
    char s = 's', d = 'd', h = 'h';

    int n, count = 0;
    cout << " Enter n : " << endl;
    cin >> n;

    solve(s, d, h, n, count);
    cout << "\n No of Steps \n"
         << count;
    return 0;
}