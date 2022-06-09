#include<iostream>
#include<queue>

using namespace std;

void rev_que(queue<int > &q)
{
int temp;
temp=q.back();
q.back()=q.front();
q.front()=temp;
}

void display(queue <int > q)
{
    while(!q.empty())
    {
        cout<<q.front();
        q.pop();
    }
    cout<<endl;
}


int main()
{
    queue <int >q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    display(q);
    rev_que(q);
    display(q);
    return 0;
}