#include <iostream>
#include <vector>
#include "tree.h"
using namespace std;

void printTree(Tree<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " : ";
    for (int i = 0; i < root->child.size(); i++)
    {
        cout << root->child[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->child.size(); i++)
    {
        printTree(root->child[i]);
    }
}
void Takeinput (Tree<int> *root)
{
    
}

int main()
{

    Tree<int> *root = new Tree<int>(1);
    Tree<int> *node1 = new Tree<int>(2);
    Tree<int> *node2 = new Tree<int>(3);
    root->child.push_back(node1); // conneting node1 to root
    root->child.push_back(node2);

    printTree(root);
    delete root;
    delete node1;
    delete node2;
    return 0;
}