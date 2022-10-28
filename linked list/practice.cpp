
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class List
{
    Node *Head;
    Node *Tail;

public:
    Node *Begin()
    {
        return Head;
    }
    void Push_front(int d)
    {
        Node *n = new Node(d);
        if (Head == NULL)
        {
            Head = Tail = n;
        }
        else
        {
            n->next = Head;
            Head = n;
        }
    }

    void Push_back(int d)
    {
        Node *n = new Node(d);
        if (Head == NULL)
        {
            Head = Tail = n;
        }
        else
        {
            n->next = Tail;
            Tail = n;
        }
    }
    void reverse()
    {
        }
};

int main()
{
    List a;
    a.Push_back(10);
    a.Push_front(20);
    a.Push_back(30);

    Node *Head = a.Begin();

    while (Head != NULL)
    {
        cout << Head->data << "->";
        Head = Head->next;
    }
    return 0;
}
