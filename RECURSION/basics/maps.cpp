#include <bits/stdc++.h>

using namespace std;

int count1 = 0;
void solve(string ip, string op, map<string, int> &m)
{
    if (ip.empty() == true)
    {
        m[op]++;

        if (m[op] == 1)
            cout << op << " ";
        return;
    }

    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);

    ip.erase(ip.begin() + 0);

    solve(ip, op1, m);
    solve(ip, op2, m);
}

int main()
{
    string ip, op = "";
    cout << "Enter the string = " << endl;
    cin >> ip;
    map<string, int> m;
    solve(ip, op, m);
    cout << " \n Number of substrings = " << count1;
    return 0;
}