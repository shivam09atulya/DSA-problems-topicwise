#include <bits/stdc++.h>

using namespace std;

void mid_del(stack<int> &s, int k)
{
    if (k == 1)
    {
        s.pop();
        return;
    }

    int last = s.top();
    s.pop();
    mid_del(s, k - 1);
    s.push(last);
}

void display(stack<int> s)
{
    while (s.size())
    {
        cout << " " << s.top();
        s.pop();
    }
}

int main()
{
    stack<int> s;
    int size = 10;
    while (size--)
    {
        s.push(rand() % 10);
    }

    display(s);
    cout << endl;
    int k = s.size() / 2 + 1;
    mid_del(s, k);
    display(s);
    cout << endl;
    return 0;
}