#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    stack<pair<int,int>> s;
    vector<int> v1,v2;

    int a[] = {1,6,4,10,2,5}, i, size;

    size = sizeof(a) / sizeof(int)-1;
    for (i = size; i >= 0;)
    {
        if (s.empty())
        {
            v1.push_back(-1);
            v2.push_back(-1);
            s.push({a[i],i});
            i--;
        }

        else if (a[i] > s.top().first)
        {
            v1.push_back(s.top().first);
            v2.push_back(s.top().second);
            s.push({a[i],i});
            i--;
        }

        else
            s.pop();
    }

    reverse(v1.begin(), v1.end());
    reverse(v2.begin(), v2.end());
    for (i = 0; i <= size; i++)
        cout <<endl<< " " << v1[i]<<"  index  "<<v2[i]<<endl;

    return 0;
}