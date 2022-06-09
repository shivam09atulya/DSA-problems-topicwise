    #include<iostream>
    #include<queue>

    using namespace std;

    void display(queue <int> qt)
    {
        while(!qt.empty())
        {
            cout<<qt.front()<<" ";
            qt.pop();
        }
        cout<<endl;
    }

    void lets_do(queue <int > q)
    {
        queue <int > q1,q2,qt;
        int mid,i;
        mid=q.size()/2;
        int acc_size=q.size();
        for(i=0;i<mid;i++)
        {
            q1.push(q.front());
            q.pop();
        }
        for(i=mid;i<acc_size;i++)
        {
            q2.push(q.front());
            q.pop();
        }

        while(!q1.empty())
        {
            qt.push(q1.front());
            q1.pop();
            qt.push(q2.front());
            q2.pop();
        }

        display(qt);
    }

    int main()
    {
        queue <int > q;
        q.push(11);   
        q.push(12);   
        q.push(13);   
        q.push(14);   
        q.push(15);   
        q.push(16);   
        q.push(17);   
        q.push(18);   
        q.push(19);   
        q.push(20);
        q.push(21);
        display(q);
        lets_do(q);   
        return 0;
    }