#include "tree.h"
#include<vector>

void printall(int length,vector <int > v1)
{
    for(int i=0;i<length;i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}

bool check_sum(int req,node *root,int sum,vector <int > v1,int length)
{

    if(!root)
    return false;

    v1.push_back(root->data);
    length++;
    sum+=root->data;

    if(sum==req){
    cout<<"Found!!!";
    printall(length,v1);
    return true;}

    return (check_sum(req,root->lchild,sum,v1,length) || check_sum(req,root->rchild,sum,v1,length) );

}


int main()
{

    node *root = new node(1);
    root->lchild = new node(2);
    root->rchild = new node(3);
    root->lchild->lchild = new node(4);
    root->lchild->rchild = new node(5);
    root->rchild->lchild = new node(6);
    root->rchild->rchild = new node(7);
    display1(root);
    cout << endl;
    int sum=0,length=0;
    vector <int > v1;   
    int req;
    cin>>req;
    check_sum(req,root,sum,v1,length);
    return 0;

}


// Here we pass length , sum and vector as arguments because it keeps on changing and after somethings doesnt match it goes back in recursion 
// which means deducting the sum which was previously added due to steps.

/*
    1
   / \
  2   3
/ \   /\
4  5  6 7

so if we have to find 11 as the sum and the cursor went to 1 2 5 , the sum will be 8 but after that it will retrace and the sum will again become 0
so 1 3 7
*/