#include <bits/stdc++.h>

using namespace std;

void admissible(char a[], int size)
{
    stack<int> s;
    int i, j;
    vector<int> v;
    for (i = 0, j = 1; i < size && j < size;)
    {

        if (a[i] == 'S')
        {
            s.push(j);
            j++;
            i++;
        }
        else
        {
            v.push_back(s.top());
            s.pop();
            i++;
        }
    }
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << endl;
    if (s.empty())
        cout << "True" << endl;
    else
        cout << "False" << endl;
}

int main()
{
    char a[] = {'S', 'S', 'S', 'X', 'X', 'S', 'S', 'X', 'S', 'X', 'X', 'X'};
    stack<int> s;
    int size = sizeof(a) / sizeof(a[0]);
    admissible(a, size);
}