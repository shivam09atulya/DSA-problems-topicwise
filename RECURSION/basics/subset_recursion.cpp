#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> sol;
    void solve(vector<int> ip, vector<int> op)
    {
        if (ip.empty() == true)
        {
            sol.push_back(op);
            return;
        }

        vector<int> op1(op);
        vector<int> op2(op);

        op2.push_back(ip[0]);
        ip.erase(ip.begin() + 0);

        solve(ip, op1);
        solve(ip, op2);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> ip(nums);
        vector<int> op;
        solve(ip, op);
        return sol;
    }
};

int main()
{
    vector<int> v = {1, 2};

    class Solution sol;
    vector<vector<int>> ans;
    ans = sol.subsets(v);

    for (int i = 0; i < ans[0].size(); i++)
    {
        cout << ans[0][i];
    }
    return 0;
}