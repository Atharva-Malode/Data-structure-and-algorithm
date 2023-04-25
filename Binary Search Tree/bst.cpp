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

bool search (Node * root ,int value)
{

    if ( root == NULL)
    {
        return false;
    }
    if (root -> key == value)
    {
         return true;
    }
     else if (value < root-> key)
     {
        search(root -> left, value);
     }
     else 
     {
        search(root -> right, value);
     }
     //return false;
}

Node * FindMin(Node * root)
{
    while(root -> left != NULL)
    {
       root = root -> left;
    }
    return root;
}

Node * remove(Node * root , int key)
{
    // To search for the node we have to delete
    if (root == NULL)
    {
        return NULL;
    }
    else if (key < root -> key){
        root -> left = remove(root->left,key);
    }
    else if (key > root -> key){
        root -> right = remove(root-> right,key);
    }
    else {

   // to delete node
   //if it is with no child node 
   if (root -> left == NULL && root -> right == NULL)
   {
         delete root;
         return NULL;
   }

   //if it is with one child node
   else if (root -> left == NULL)
   {
        Node * Temp = root;
        root = root -> right;
        delete Temp;
   }
   else if(root -> right == NULL)
   {
        Node * Temp = root;
        root = root -> left;
        delete Temp;
   }
   //if the node has two child node 
   else 
   {
        Node * Temp = FindMin(root -> right);
        root -> key = Temp -> key;
        root ->right = remove(root->right, Temp->key);

   }
   return root;
    }
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
    cout <<endl;
    bool a = search (root,6);
    if (a == true)
    {
        cout << "Present"<<endl;
    }
    else 
    {
        cout <<"Not Present"<<endl;
    }
    
    root = remove(root,10);
    PrintOrder(root);
    return 0;
}