#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node *next;
};

void insert(node *head,int data)
{
    head=new node();
    head->data=data;
    head->next=NULL;
}

int main()
{
    node *head1;
    insert(head1,3);
    insert(head1,6);
    insert(head1,9);
    return 0;
}