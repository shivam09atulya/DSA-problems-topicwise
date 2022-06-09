#include <bits/stdc++.h>

using namespace std;

int count1 = 0;
void solve(string ip, string op)
{
    if (ip.empty() == true)
    {
        count1++;
        cout << op << " ";
        return;
    }

    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);

    ip.erase(ip.begin() + 0);

    solve(ip, op1);
    solve(ip, op2);
}

int main()
{
    string ip, op = "";
    cout << "Enter the string = " << endl;
    cin >> ip;
    solve(ip, op);
    cout << " \n Number of substrings = " << count1;
    return 0;
}