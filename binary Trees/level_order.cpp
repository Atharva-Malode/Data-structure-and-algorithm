#include <iostream>

using namespace std;

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
    if (d == NULL)
    {
        return;
    }
    Node *n = new Node(d);
    n->left = buildtree();
    n->right = buildtree();
}

void levelOrder(Node *root)
{
}
int main()
{

    return 0;
}