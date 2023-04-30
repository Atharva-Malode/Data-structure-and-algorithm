#include <iostream>
#include <vector>
using namespace std;

class node
{

    public :
    int key;
    node * left;
    node * right;

    node (int key) : key(key),left (NULL),right(NULL) {}
};

node * insert(node * root, int key)
{
     if (root == NULL)
     {
        return new node(key);
     }

     if (key < root -> key)
     {
         root -> left = insert (root -> left, key);  
     }
     else {
         root -> right = insert (root -> right, key); 
     }
     return root;
}
 void Print(node * root)
 {
      if (root == NULL)
      {
        return;
      }
      Print(root-> left);
      cout << root -> key << " ";
      Print(root-> right);

 }
 node * FindMin(node * root)
 {
    while(root -> left != NULL)
    {
       root = root -> left;
    }
    return root;
 }
  node* remove(node * root, int key)
  {
       if (root == NULL)
       {
        return NULL;
       }
       else if (key < root -> key)
       {
            root -> left = remove(root -> left, key);
       }
       else if (key > root -> key)
       {
          root -> right = remove (root -> right,key);
       }
       else 
       {
        // to delete the node 
        // no children
         if (root -> left ==NULL and root -> right ==NULL)
         {
           delete root;
         }
        //one children
         else if(root -> left == NULL)
         {
           node * temp = root;
           root = root -> right;
           delete temp;    
         }
         else if (root -> right == NULL)
         {
           node * temp = root;
           root = root -> left;
           delete  temp;
         }
        //two children 
        else
        {
          node * temp = FindMin(root -> right);
          root -> key = temp -> key;
          root ->right = remove(root->right, temp->key);
        } 
          return root;
       }

  }

void rootToleaf(node * root , vector <int> &path)
{
   //base case
    if(root == NULL)
    {
       return;
    }
    if(root->left == NULL and root->right == NULL)
    {
        for (auto node : path)
        {
          cout << node << "->";
        }

        cout << root-> key<<endl;
    }
 
    path.push_back(root->key);
    rootToleaf(root -> left, path);
    rootToleaf(root -> right, path);
    path.pop_back();
}
int main ()
{
   node * root = NULL;
   int arr[] = {8,3,10,1,6,14,4,7,13};

   for (auto x : arr)
   {
     root = insert(root,x);
   }
   Print(root);
   cout << endl;
   vector <int> path;
   rootToleaf(root,path);

    return 0;
}