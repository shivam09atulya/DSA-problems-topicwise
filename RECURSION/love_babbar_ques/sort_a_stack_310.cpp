#include <bits/stdc++.h>

using namespace std;

void display(stack<int> s)
{
    while (!s.empty())
    {
        cout << " " << s.top();
        s.pop();
    }
    cout << endl;
}

void right_place(stack<int> &s, int temp)
{
    if (s.empty() || s.top() < temp)
    {
        s.push(temp);
        return;
    }

    int aux = s.top();
    s.pop();
    right_place(s, temp);
    s.push(aux);
}

void sort_stack(stack<int> &s)
{
    if (s.size() == 1)
        return;

    int temp = s.top();
    s.pop();
    sort_stack(s);
    right_place(s, temp);
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
    sort_stack(s);
    display(s);
    return 0;
}