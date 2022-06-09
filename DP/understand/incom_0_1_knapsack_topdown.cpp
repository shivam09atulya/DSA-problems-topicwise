#include <bits/stdc++.h>

using namespace std;

int t[102][1002];

int knapsack(int val[], int wt[], int W, int n)
{

    for (int i = 0; i < W + 1; i++)
        for (int j = 0; j < n + 1; j++)
            t[W][n] = 0;

    for (int i = 0; i < W + 1; i++)
        for (int j = 0; j < n + 1; j++)
        {

            if (t[W][n] != -1)
                return t[W][n];

            if (wt[i - 1] <= j)
            {
                t[W][n] = max(val[j - 1] + t[W - wt[i - 1]][j - 1], t[i][j] - 1);
                return t[W][n];
            }

            else if (wt[i - 1] > j)
            {
                t[W][n] = t[i][j - 1];
                return t[W][n];
            }
        }

    return -1;
}

int main()
{
    memset(t, -1, sizeof(t));
    int val[] = {1, 4, 5, 7};
    int wt[] = {1, 3, 4, 5};
    int W = 7;
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