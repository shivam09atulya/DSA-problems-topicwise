#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue <int >q;
    q.push(9);
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    q.pop();
    cout<<q.back();
    cout<<q.front();
    return 0;
}