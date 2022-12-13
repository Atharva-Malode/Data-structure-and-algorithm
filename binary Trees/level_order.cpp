#include <iostream>
#include <queue>

using namespace std;

// Input: 1 2 4 -1 -1 5 7 -1 -1 3 -1 6 -1 -1
/*
        Output: 1
                2 3
                4 5 6
                7
*/
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

void levelOrder(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *f = q.front();
        if (f == NULL)
        {
            cout << endl;
            q.pop();
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << f->data << " ";
            q.pop();
            if (f->left)
            {
                q.push(f->left);
            }
            if (f->right)
            {
                q.push(f->right);
            }
        }
    }
    return;
}
int main()
{
    Node *root = buildtree();
    levelOrder(root);

    return 0;
}