#include<stack>
#include<iostream>

using namespace std;
 
void convert(char a[],int size)
{
int i;
stack <char > s;
for(i=0;i<size;i++)
{
    if ( a[i] == '{' || a[i] == '(' || a[i] == '[')
        s.push(a[i]);

    else if(a[i]=='}'||a[i]==')'||a[i]==']')
    {
        if(s.top()=='{'&&a[i]=='}')
        s.pop();

        else if (s.top() == '(' && a[i] == ')')
            s.pop();

        else if (s.top() == '[' && a[i] == ']')
            s.pop();
        else 
        {
            cout<<"Not Balanced"<<endl;
            return;
        }
    }
}
if(s.empty())
cout<<"Balanced "<<endl;
else 
cout<<"Not Balanced"<<endl;
}

int main()
{
    char a[] = {"{()}[]"};
    int size=sizeof(a)/sizeof(a[0]);
    convert(a,size);

    return 0;
}