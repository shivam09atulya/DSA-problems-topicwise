#include <bits/stdc++.h>

using namespace std;

void trans(stack<int> &s, int temp)
{
    if (s.empty())
    {
        s.push(temp);
        return;
    }

    int aux = s.top();
    s.pop();
    trans(s, temp);
    s.push(aux);
}

void reverse(stack<int> &s)
{
    if (s.size() == 0)
        return;

    int temp = s.top();
    s.pop();
    reverse(s);
    trans(s, temp);
}

void display(stack<int> s)
{
    while (!s.empty())
    {
        cout << " " << s.top();
        s.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> s;

    int t = 5;
    while (t--)
    {
        s.push(rand() % 10);
    }
    display(s);
    reverse(s);
    display(s);
    return 0;
}