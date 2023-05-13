#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack <int> &a, int data)
{
    if(a.empty())
    {
        a.push(data);
        return;
    }

    //store the top temporary 
    int temp = a.top();
    a.pop();
    insertAtBottom(a, data);

    //this code works while comming in the back direction
    a.push(temp);
}
int main ()
{
   stack<int>a ;
   a.push(1);
   a.push(2);
   a.push(3);
   a.push(4);

   insertAtBottom(a,5);

   //cout << a.size()<<endl;

   while(!a.empty())
   {
    cout << a.top()<<endl;
    a.pop();
   }

    return 0;
}