#include<iostream>
#include<queue>
#include<vector>
#include<stack>

using namespace std;

    void display(queue <int > q)
    {
        
        
        while(!q.empty())
        {
            cout<<q.front()<<" ";
            q.pop();
        }
        cout<<endl;
    }

    void q_reverse(queue <int> q,int k)
    {   stack <int> s;
        int K=k;
        int Size = q.size();
        while(k--)
        {
            s.push(q.front());
            q.pop();
        }

        
        while(!s.empty())
        {
            q.push(s.top());
            s.pop();
        }

        int count=Size-K;
        while(count--)
        {
            q.push(q.front());
            q.pop();
        }
        // while(!s.empty())
        // {
        //     qf.push(s.top());
        //     s.pop();
        // }

        // while(!q.empty())
        // {
        //     qf.push(q.front());
        //     q.pop();
        // }

        display(q);
    }

int main()
{
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    int k=4;
    q_reverse(q,k);
    return 0;
}