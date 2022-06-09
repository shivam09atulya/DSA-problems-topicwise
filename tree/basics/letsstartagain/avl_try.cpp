#include<iostream>
using namespace std;

class avlnode{
    public:
    int data;
    avlnode *left;
    avlnode *right;
    int height;


    avlnode()
    {
        data=0;
        left=NULL;
        right=NULL;
        height=0;
    }

    avlnode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
        height = 0;
    }
};

int main()
{

    avlnode *a=new avlnode(4);
    return 0;
}