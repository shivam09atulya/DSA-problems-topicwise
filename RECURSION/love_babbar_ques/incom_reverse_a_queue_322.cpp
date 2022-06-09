#include <bits/stdc++.h>

using namespace std;

void display(queue<int> q)
{
    while (!q.empty())
    {
        cout << " " << q.front();
        q.pop();
    }
    cout << endl;
}

void trans(queue<int> &q, int temp)
{
    if (q.empty())
    {
        q.push(temp);
        return;
    }
    int aux = q.front();
    q.pop();
    trans(q, temp);
    q.push(aux);
}

void reverse(queue<int> &q)
{
    if (q.size() == 0)
        return;

    int temp = q.front();
    q.pop();
    reverse(q);
    trans(q, temp);
}

int main()
{
    queue<int> q;

    int t = 5;
    while (t--)
    {
        q.push(rand() % 10);
    }

    display(q);
    reverse(q);
    display(q);
    return 0;
}