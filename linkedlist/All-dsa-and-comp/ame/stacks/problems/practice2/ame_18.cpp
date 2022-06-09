#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void indicator(stack<int> s, int a[], int size)
{
    vector<char> v;
    int i,j;
    for (i = 0,j=1; i < size|| j<=size;)
    {
        if (s.empty())
        {
            s.push(j);
            j++;
            v.push_back('S');
        }
        else
        {
            if (a[i] == s.top())
            {
                s.pop();
                i++;
                v.push_back('X');
            }
            else
            {
                s.push(j);
                j++;
                v.push_back('S');
            }
        }
       
    }
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

int main()
{
    stack<int> s;
    int a[] = {1,2,3,4,5,6};
    int size = sizeof(a) / sizeof(a[0]);
    indicator(s, a, size);

    return 0;
}