#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    vector<int > maxSlidingWindow(vector<int>&num,int k)
    {
        vector <int> v;
        int i,temp,max,j;
        for(i=0;i<num.size()-k+1;i++)
        {
            max=num[i],j=i;
            temp=k;
            while(temp--)
            {
                if(num[j]>max)
                max=num[j];
                j++;
            }
            v.push_back(max);
        }
        return v;
    }
    
};

int main()
{
    Solution *obj=new Solution();
    vector <int> num;
    num={1,3,-1,-3,5,3,6,7};
    vector <int> v=obj->maxSlidingWindow(num,3);
    for(int i;i<v.size();i++)
    cout<<v[i]<<" ";
    return 0;
}