#include <bits/stdc++.h>

using namespace std;

void insert(int *a, int size, int pos, int val)
{
    for (int i = size; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = val;
}

void display(int *a, int size)
{
    if (size == 0)
        return;

    display(a, size - 1);
    cout << " " << a[size];
}

int main()
{
    int a[5] = {1, 2, 3, 4, 6};
    int size = sizeof(a) / sizeof(a[0]);
    display(a, size);
    insert(a, size, 2, 5);
    cout << endl;
    display(a, size);
    return 0;
}