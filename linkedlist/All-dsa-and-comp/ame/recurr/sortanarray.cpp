#include<iostream>
#include<vector>
using namespace std;

    int insert(vector <int> &v,int last)
    {
        if(v.size()==0 || v.size()==1)
        return last;

        v.pop_back();
        return insert(v,last);

    }

    void rev(vector <int > &v)
    {
        if(v.size()==1)
        return ;
        int last=v[v.size()-1];
        v.pop_back();
        rev(v);
        insert(v,last);
        // return rev(v);   
    }
int main()
{
    vector <int> v;
    v={1,5,3,5,6,9,2};
    rev(v);
    for(int i =0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}