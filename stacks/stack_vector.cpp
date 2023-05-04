#include <iostream>
#include "satck_vector.h"

using namespace std;

int main()
{
    
    Stack<int> a;

    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);

    while (! a.empty())
    {
        cout << a.top()<<" ";
        a.pop();
    }
    return 0;
}