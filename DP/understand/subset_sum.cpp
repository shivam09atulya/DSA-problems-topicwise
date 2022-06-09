#include <bits/stdc++.h>

using namespace std;

int t[1002][1002];
bool subset_sum(int set[], int sum, int n)
{
    if (n == 0)
        return false;

    if (sum == 0)
        return true;

    if (set[n - 1] <= sum)
    {
        return (subset_sum(set, sum - set[n - 1], n - 1) || subset_sum(set, sum, n - 1));
    }

    else if (set[n - 1] > sum)
    {
        return (subset_sum(set, sum, n - 1));
    }

    return false;
}

int main()
{
    // memset(t, -1, sizeof(t));
    int set[] = {3, 34, 4, 12, 5, 2};
    int sum = 7;
    int n = sizeof(set) / sizeof(set[0]);

    cout << "The possiblity of this is " << subset_sum(set, sum, n);
    return 0;
}