#include <bits/stdc++.h>

using namespace std;

void solve(string ip, string op, map<string, int> &m)
{
    if (ip.empty() == true)
    {
        m[op]++;

        if (m[op] == 1)
            cout << " " << op << endl;
        return;
    }

    string op1 = op;
    string op2 = op;

    if (isdigit(ip[0]))
    {
        op1.push_back(ip[0]);
        op2.push_back(ip[0]);
    }
    else
    {
        if (isupper(ip[0]))
        {
            op1.push_back(tolower(ip[0]));
            op2.push_back(ip[0]);
        }

        if (islower(ip[0]))
        {
            op1.push_back(toupper(ip[0]));
            op2.push_back(ip[0]);
        }
    }

    ip.erase(ip.begin() + 0);

    solve(ip, op1, m);
    solve(ip, op2, m);
}

int main()
{
    string ip, op;

    cout << "Enter the string" << endl;
    ip = " 3z4 ";
    map<string, int> m;
    solve(ip, op, m);
    return 0;
}