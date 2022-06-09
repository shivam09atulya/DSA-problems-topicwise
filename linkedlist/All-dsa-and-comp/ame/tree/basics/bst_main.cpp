#include <iostream>

using namespace std;

class bst
{
    class bst *left;
    int data;
    class bst *right;

public:
    bst();
    bst(int val);
    bst *insert(bst *root, int val);
    void inorder(bst *root);
    bst *search(bst *root, int val);
    bst *del(bst *root, int val);
    bst *inordersucc(bst *root, int val);
};

bst::bst() : data(0),
             right(NULL),
             left(NULL) {}

bst::bst(int val)
{
    data = val;
    left = right = NULL;
}

bst *bst::insert(bst *root, int val)
{
    if (root == NULL)
        return new bst(val);

    if (root->data < val)
        root->right = insert(root->right, val);

    else
        root->left = insert(root->left, val);

    return root;
}

void bst::inorder(class bst *root)
{
    if (root)
    {
        inorder(root->left);
        cout << " " << root->data;
        inorder(root->right);
    }
}

bst *bst::search(bst *root, int val)
{
    if (root == NULL)
        return NULL;

    if (root->data > val)
        return search(root->right, val);

    else if (root->data < val)
        return search(root->left, val);

    else
        return root;
}

bst *bst::inordersucc(bst *root, int val)
{
    bst *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

bst *bst::del(bst *root, int val)
{
    if (root == NULL)
        return NULL;

    else if (root->data > val)
        root->left = del(root->left, val);

    else if (root->data < val)
        root->right = del(root->right, val);

    else
    {
        if (root->left != NULL)
        {
            bst *temp = root->left;
            free(root);
            return temp;
        }

        else if (root->right != NULL)
        {
            bst *temp = root->right;
            free(root);
            return temp;
        }

        else
        {
            bst *temp = inordersucc(root, val);
            root->data = temp->data;
            root->right = del(root, val);
        }
    }

    return root;
}

int main()
{
    bst *root = NULL, b;
    root = b.insert(root, 50);
    b.insert(root, 30);
    b.insert(root, 20);
    b.insert(root, 10);
    b.insert(root, 70);
    b.insert(root, 80);
    b.inorder(root);
    cout << endl;
    // (b.search(root, 70) != NULL) ? cout << "Exists" << endl : cout << "Not Exist" << endl;
    // (b.search(root, 85) != NULL) ? cout << "Exists" << endl : cout << "Not Exist" << endl;
    root = b.del(root, 20);
    root = b.del(root, 30);
    b.inorder(root);
    return 0;
}