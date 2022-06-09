#include <iostream>
#include <stack>
#include <vector>
#include<algorithm>


using namespace std;

int main()
{   
    stack <int> stack;
    vector <int> vector;
    int a[]={1,3,0,0,1,2,4}; 
    int i=sizeof(a)/sizeof(int)-1;

    for(i;i>=0;)
    {
        if(stack.empty())
        {
        vector.push_back(-1);
        stack.push(a[i]);
        i--;
        }

        else if(stack.size()==0|| stack.top()>a[i])
        {
            vector.push_back(stack.top());
            stack.push(a[i]);
            i--;
        }

        else{
            stack.pop();
        }

    }
    reverse(vector.begin(),vector.end());
    for(i=0;i<vector.size();i++)
    {
        cout<<vector[i]<<" ";
    }
    return 0;
}