#include "tree.h"
#include <vector>
#define len 1000
// the vector contains only digits where the search has been done and eliminate the digits or paths where the sum was not found

void printall(int length, vector<int> v)
{
    for (int i = 0; i < length; i++)
        cout << " " << v[i];
}

void sum_to_leaf(node *root, vector<int> v, int length,int acc_sum,int sum)
{
    if (!root)
        return;

    v.push_back(root->data);
    length++;
    sum+=root->data;

    if (sum==acc_sum)
    {
        printall(length, v);
        cout << endl;
    }

    sum_to_leaf(root->lchild, v, length,acc_sum,sum);
    sum_to_leaf(root->rchild, v, length,acc_sum,sum);
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
    int length = 0;
    vector<int> v;
    sum_to_leaf(root, v, length,8,0);
    return 0;
}


/* 
    How the code works 

        1
     /      \
    2       3
   / \     / \
  4   5    6   7

  lets suppose we want to search for sum 10 then
    it will search first through 1 2 4 
    not found then it will start over from 1 
        1 2 5
        then 
        1 3 6 found!!!
        display and leave
        
*/