#include<iostream>
#include<queue>
#include<stack>

using namespace std;

void cons(stack <int >s)
{
    stack <int > s1;
    int acc_size;
    if(s.size()%2!=0)
    {
        s.pop();
    }

int count=0;
    while(!s.empty())
    {
        if(s1.empty())
        {
        s1.push(s.top());
        s.pop();
        }

        
        else if(s1.top()==s.top()+1||s1.top()==s.top()-1){
           s1.pop();
           s.pop();
        }

        else{
            count=1;
            break;
        }
    }
    if (count == 0)
        cout << "Pair successcively consecutive" << endl;
    else
        cout << "not " << endl;
}
int main()
{
    stack<int > s;
    s.push(4);
    s.push(6);
    s.push(6);
    s.push(7);
    s.push(4);
    s.push(3);
    cons(s);
    return 0;
}