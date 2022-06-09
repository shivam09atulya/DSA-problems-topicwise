#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>

using namespace std; 

#define R 4
#define C 4
vector<int> NSL(int a[],int size)
{

    vector <int> v1;
    stack <pair<int,int>> s1;
    int i;

    for(i=0;i<size;)
    {
        if(s1.empty())
        {
            v1.push_back(-1);
            s1.push({a[i],i});
            i++;
        }
        else if(a[i]>s1.top().first)
        {
            v1.push_back(s1.top().second);
            s1.push({a[i],i});
            i++;
        }
        else 
        s1.pop();
    }
    //cout << " Nearest Smaller Left = \n";
    //for (i = 0; i < size ; i++)
        //cout << v1[i]<<" ";
        //cout<<endl;
    return v1;
}

vector <int> NSR(int a[],int size)
{

    vector <int> v1;
    stack <pair<int,int>>s1;
    int i;
    for( i=size-1;i>=0;)
    if(s1.empty())
    {
        v1.push_back(R);
        s1.push({a[i],i});
        i--;
    }

    else if(a[i]>s1.top().first)
    {
        v1.push_back(s1.top().second);
        s1.push({a[i],i});
        i--;
    }

    else 
    s1.pop();
    reverse(v1.begin(),v1.end());
    //cout << " Nearest Smaller Rigth = \n";
    // for (i = 0; i < size ; i++)
         //cout<<v1[i]<<" ";
         //cout<<endl; 
        
 return v1;
}


int max_histogram(int a[],int size)
{

    vector <int > right,left;
    right=NSR(a,size);
    left=NSL(a,size);
    int diff[10],i;
    for(i=0;i<size;i++)
    diff[i]=right[i]-left[i]-1;

    //cout<<"Difference array \n";
    //for(i=0;i<size;i++)
    //cout<<diff[i]<<" ";
    //cout<<endl;

    int result[10];

    for(i=0;i<size;i++)
    result[i]=diff[i]*a[i];

    //cout << "Result array \n";
    //for (i = 0; i < size; i++)
        //cout << result[i] << " ";
    //cout << endl;

    int max_area=result[0];
    for(i=0;i<size;i++)
    {
        if(result[i]>max_area)
        max_area=result[i];
    }

    return max_area;

}

int max_binary_area(int a[][4])
{
    int result=max_histogram(a[0],R);
    int i,j;
    for(i=1;i<R;i++){
        for(j=0;j<C;j++){
            if(a[i][j])
            a[i][j]+=a[i-1][j];
        }
        result=max(result,max_histogram(a[i],R));
    }

return result;
}

int main()
{
    int a[R][C] = {{0,1,1,0},
                {1,1,1,1},
                {1,1,1,1},
                {1,1,0,0}};
        // cout<<"Maximum Histogram area is "<<endl<<max_histogram(a,sizeof(a)/sizeof(int));
   cout<<"Maximum area of binary = "<<  max_binary_area(a);
    return 0;
}