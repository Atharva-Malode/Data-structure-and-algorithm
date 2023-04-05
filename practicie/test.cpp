#include <iostream>

using namespace std;

class Node
{

public:
    int data;
    Node *Next;

    Node(int d) : data(d), Next(NULL){};
};

class List
{
    Node *Head;
    Node *Tail;

    List(int d) : Head(NULL), Tail(NULL) {}

    void Push_front(int d)
    {
        if (Head == NULL)
        {
            Node *n = new Node(d);
            Head = Tail = n;
        }
        else
        {
            Node *n = new Node(d);
            n->Next = Head;
            Head = n;
        }
    }
};

int main()
{

    return 0;
}