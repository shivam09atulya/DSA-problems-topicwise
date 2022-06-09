#include "bst.h"
#include<stack>

int countthis = 0;

void find(node *root)
{
	if(root==NULL)
	return;
	stack <node*> s;
while(true)
{	if(root!=NULL)
	{
		s.push(root);
		root=root->lchild;
	}
	else
	{
		if(s.empty()){break;}
		root=s.top();
		s.pop();
		countthis++;
		cout<<root->data<<" ";
		root=root->rchild;

	}
  }
}

int main()
{
	node *root = new node();
	root = NULL;
	bst b;
	root = b.insert(root, 20);
	b.insert(root, 50);
	b.insert(root, 30);
	b.insert(root, 60);
	b.insert(root, 70);
	b.insert(root, 70);
	b.insert(root, 70);
	// b.display(root);
	find(root);
	cout << "Count of this is " << countthis << endl;
}