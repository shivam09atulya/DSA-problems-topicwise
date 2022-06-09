#include <bits/stdc++.h>

using namespace std;

void shift(int i, int ins, int *a, int size)
{
    for (int j = size; j >= i; j--)
    {
        a[j + 1] = a[j];
    }
    a[i] = ins;
}
// void shift(int i, int ins, int *a, int size)
// {
//     for (int j = i; j < size + 1; j++)
//     {
//         a[j + 1] = a[j];
//     }
//     a[i] = ins;
// } NOT USE THIS

void insert(int *a, int size, int pos)
{
    for (int i = 0; i < size; i++)
    {
        if (pos < a[i])
        {
            shift(i, pos, a, size);
            break;
        }
    }
}

void display(int a[], int size)
{
    for (int i = 0; i < size; i++)
        cout << " " << a[i];
    cout << endl;
}

int main()
{
    int a[11] = {1, 2, 3, 4, 6, 101, 8, 9, 100};
    int size = sizeof(a) / sizeof(a[0]);
    display(a, size);
    insert(a, size, 69);
    size = sizeof(a) / sizeof(a[0]);
    display(a, size);
    return 0;
}