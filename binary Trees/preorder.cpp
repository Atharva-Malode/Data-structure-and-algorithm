#include <iostream>
using namespace std;

// Input : 1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1
// Output for preorder : 1 2 4 5 3 6
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

// preorder Build of the tree
node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    node *n = new node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

void PrintPreOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    PrintPreOrder(root->left);
    PrintPreOrder(root->right);
}

int main()
{
    node *root = buildTree();
    PrintPreOrder(root);
    return 0;
}