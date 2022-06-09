#include <bits/stdc++.h>

using namespace std;

void display(stack<int> s)
{
    if (s.size() == 0)
        return;

    int last = s.top();
    s.pop();
    cout << " " << last;
    display(s);
}

void insert(stack<int> &s, int last)
{
    if (s.size() == 0)
    {
        s.push(last);
        return;
    }
    int temp = s.top();
    s.pop();
    insert(s, last);
    s.push(temp);
}

void rev(stack<int> &s)
{
    if (s.size() == 1)
        return;

    int last = s.top();
    s.pop();
    rev(s);
    insert(s, last);
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
    rev(s);
    display(s);
    return 0;
}