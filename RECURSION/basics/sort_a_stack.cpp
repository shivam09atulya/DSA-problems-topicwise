#include <bits/stdc++.h>

using namespace std;

void display(stack<int> s)
{
    while (s.size() != 0)
    {
        cout << " " << s.top();
        s.pop();
    }
}

void insert(stack<int> &s, int temp)
{
    if (s.size() == 0 || s.top() < temp)
    {
        s.push(temp);
        return;
    }

    int val = s.top();
    s.pop();
    insert(s, temp);
    s.push(val);
}

void sort(stack<int> &s)
{
    if (s.size() == 1)
        return;

    int last = s.top();
    s.pop();
    sort(s);
    insert(s, last);
}

int main()
{
    stack<int> s;
    int size = 100;
    while (size--)
    {
        s.push(rand() % 100);
    }
    display(s);
    cout << endl;
    sort(s);
    display(s);
    return 0;
}