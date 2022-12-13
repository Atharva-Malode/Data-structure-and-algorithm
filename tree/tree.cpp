#include <iostream>
#include "tree.h"
using namespace std;

int mainn()
{

    Tree<int> *root = new Tree<int>(1);
    Tree<int> *node1 = new Tree<int>(2);
    Tree<int> *node2 = new Tree<int>(3);
    root->child.push_back(node1);
    root->child.push_back(node2);
    return 0;
}