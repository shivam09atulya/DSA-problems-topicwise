#include <iostream>
#include <queue>
#include <stack>

//  inserting in s1 
// during pop transfering all elements to s2(reverse) then poping out the first element
// then inserting all elements back to s1 
using namespace std;

void Que_push(stack<int> &s1, int x)
{
    s1.push(x);
}

void Que_pop(stack<int> &s1, stack<int> &s2)
{
    if (s1.empty())
        return;
    else
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s2.pop();
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
}

void dis(stack<int> s1)
{
    while (!s1.empty())
    {
        cout << " " << s1.top();
        s1.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> s1, s2;
    Que_push(s1, 1);
    Que_push(s1, 2);
    Que_push(s1, 3);
    Que_push(s1, 4);
    Que_push(s1, 5);
    dis(s1);
    Que_pop(s1, s2);
    dis(s1);

    return 0;
}
