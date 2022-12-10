#include <iostream>
using namespace std;

// Input : 1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1
// Output for preorder : 4 2 5 1 3 6

class Node
{

public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

Node *buildtree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    Node *n = new Node(d);
    n->left = buildtree();
    n->right = buildtree();
}

void PrintInOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    PrintInOrder(root->left);
    cout << root->data << " ";
    PrintInOrder(root->right);
}

int main()
{
    Node *root = buildtree();
    PrintInOrder(root);

    return 0;
}