#include <bits/stdc++.h>

using namespace std;

void display(int *a, int size)
{
    if (size == 0)
        return;

    display(a, size - 1);
    cout << a[size - 1] << " ";
}

void shift(int i, int ins, int a[], int size)
{
    for (int j = size + 1; j > i; j--)
    {
        a[j + 1] = a[j];
    }
    a[i] = ins;
}

void sort_array(int *a, int size)
{
    if (size == 1)
        return;

    sort_array(a, size - 1);
    int ins = a[size - 1];
    int b[size];
    for (int i = 0; i < size; i++)
    {
        if (ins < a[i])
        {
            shift(i, ins, a, size);
        }
    }
}

int main()
{
    int a[12] = {1, 3, 4, 3, 2, 4, 5, 7, 9, 4, 4, 8};
    int size = sizeof(a) / sizeof(a[0]);
    display(a, size - 1);
    sort_array(a, size);
    cout << " \n";
    display(a, size);
    return 0;
}