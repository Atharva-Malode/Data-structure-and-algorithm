#include <iostream>
#include "list.h"
using namespace std;

// to check the list.h file off the folder tried print in main

int main()
{

    List l;
    l.Push_back(10);
    l.Push_back(20);
    l.Push_front(30);

    /* while (head != NULL)
     {
         cout << head->getdata() << "->";
         head = head->Next;
     }
     */
    Node *head = l.begin();
    l.Insert(4, 2);
    while (head != NULL)
    {
        cout << head->getdata() << "->";
        head = head->Next;
    }

    return 0;
}
