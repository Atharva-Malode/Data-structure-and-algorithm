#include <iostream>
#include "tree.h"
using namespace std;

class node
{
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

void buildtree(node *root)
{

    int d;
    cin >> d;
    if (d == -1)
    {
        return;
    }
    node *n = new node(d);
    n->left = buildtree();
    n->right = buildtree();
}

int main()
{
    return 0;
}
