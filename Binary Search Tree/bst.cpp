#include <iostream>
using namespace std;

class Node 
{
    public:
    int key;
    Node * left;
    Node * right;

    Node (int key)
    {
        this -> key = key;
        left = right = NULL;
    }
};

Node * insert (Node*root , int key)
{
    if (root == NULL)
    {
        return new Node(key);
    }

    //recursive case 

    if (key < root -> key)
    {
        root -> left = insert(root->left,key);
    }
    else{
        root->right =insert (root -> right, key);
    }
    return root;
}

void PrintOrder (Node * root)
{
    if (root == NULL)
    {
       return;
    }

    PrintOrder(root-> left);
    cout << root -> key<<" ";
    PrintOrder(root -> right);
}

int main (){

     Node * root = NULL;
     int arr[] = {8,3,10,1,6,14,7,13};
     
     for (auto x : arr)
     {
        root = insert(root,x);
     }
     cout <<"Hello World"<<endl;
     PrintOrder(root);
     
    return 0;
}