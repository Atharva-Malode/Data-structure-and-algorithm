#include <iostream>
using namespace std;

class node
{
    public:
     int key;
     node* left;
     node* right;

     node(int key): key(key),left(NULL),right(NULL){}
};

node* insert(node * root, int key)
{
     if (root == NULL)
     {
        return new node(key);
     }

    //recursive case
    if (key < root -> key)
    {
        root -> left = insert(root -> left, key);
    }   
    else{ 
        root -> right= insert(root -> right, key);
    }
    return root;
}
void Print(node * root)
{
      if (root == NULL)
      {
        return;
      }

      Print(root->left);
      cout << root -> key<<" ";
      Print(root->right);
}
void range(node * root, int k1, int k2)
{
    if (root == NULL)
    {
        return;
    }
    
    if (root -> key >= k1 && root -> key <= k2)
    {
        range(root->left,k1,k2);
        cout << root -> key <<endl;
        range(root->right,k1,k2);
    }
    else if (root -> key > k2)
    {
       range(root-> left,k1,k2);
    }
    else
       range(root-> right,k1,k2);
    {

    }
}

int main ()
{
    node* root = NULL;
    int arr[] = {8,3,10,1,6,14,4,7,13};
    for (auto x : arr)
    {
        root = insert(root,x);
    }
  //  cout << "Hello World"<<endl;
    range(root,5,12);

    return 0;
}