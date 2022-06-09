#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int preced(char a)
{
    if(a=='+'||a=='-')
    return 1;
    else if(a=='*'||a=='/')
    return 2;
    else 
    return -1;
}

bool isOperand(char a)
{
    if(a=='+'||a=='-'||a=='*'||a=='/')
    return false;
    else 
    return true;
}

vector <char> postfix(char a[],int size){

    stack <char> s;
    vector <char> v;
    int i;
    for(i=0;i<size;i++)
    {
        if(isOperand(a[i]))
        v.push_back(a[i]);

        else
        {
            if (preced(a[i]) > preced(s.top()))
                s.push(a[i]);

            else{
                v.push_back(s.top());
                s.pop();
            }
        }
    }
    while(!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }

    return v;
}

int main()
{
    char a[]={"(A+B)+(C+D)"};
    vector <char > v;
    int size=sizeof(a)/sizeof(a[0]);
    v=postfix(a,size);
    int i;
    for(i=0;i<size;i++)
    cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}