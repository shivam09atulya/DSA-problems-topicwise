#include <bits/stdc++.h>

using namespace std;

int t[8][5];

int knapsack(int val[], int wt[], int W, int n)
{

    if (W == 0 || n == 0)
        return 0;

    if (t[W][n] != -1)
        return t[W][n];

    if (wt[n - 1] <= W)
    {
        t[W][n] = max(val[n - 1] + knapsack(val, wt, W - wt[n - 1], n - 1), knapsack(val, wt, W, n - 1));
        return t[W][n];
    }

    else if (wt[n - 1] > W)
    {
        t[W][n] = knapsack(val, wt, W, n - 1);
        return t[W][n];
    }

    return -1;
}

int main()
{
    memset(t, -1, sizeof(t));
    int val[] = {1, 4, 5, 7};
    int wt[] = {1, 3, 4, 5};
    int W = 6;
    int n = 4;

    cout << " The max profit we can get is " << knapsack(val, wt, W, n) << endl;

    cout << "The matrix : \n";
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}