// #include <bits/stdc++.h>

// using namespace std;

// void display(int a[], int size)
// {
//     if (size == 0)
//         return;

//     display(a, size - 1);
//     cout << " " << a[size - 1];
// }

// void sort_array(int a[], int size)
// {
//     if (size == 1)
//         return;

//     sort_array(a, size - 1);

//     // insertion by iterative way
//     int last = a[size - 1];
//     int j = size - 2;

//     while (j >= 0 && a[j] > last)
//     {
//         a[j + 1] = a[j];
//         j--;
//     }
//     a[j + 1] = last;
// }

// int main()
// {
//     int a[] = {1, 7, 2, 5, 4, 8, 1};
//     int size = sizeof(a) / sizeof(a[0]);

//     display(a, size);
//     cout << endl;
//     sort_array(a, size);
//     display(a, size);
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

void insert(vector<int> &v, int temp)
{
    if (v.size() == 0 || v[v.size() - 1] < temp)
    {
        v.push_back(temp);
        return;
    }

    int val = v[v.size() - 1];
    v.pop_back();
    insert(v, temp);
    v.push_back(val);
}

void sort(vector<int> &v)
{
    if (v.size() == 1)
        return;

    int temp = v[v.size() - 1];
    v.pop_back();
    sort(v);
    insert(v, temp);
}

void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << " " << v[i];
    cout << endl;
}

int main()
{
    vector<int> v = {1, 6, 4, 6, 9, 0, 5, 44, 12, -2, 2, -53};

    // for (int i = 0; i < 100; i++)
    // {
    //     v[i] = rand() % 100;
    // }
    cout << "INITIAL" << endl;
    display(v);
    sort(v);
    cout << "AFTER" << endl;
    display(v);
    return 0;
}