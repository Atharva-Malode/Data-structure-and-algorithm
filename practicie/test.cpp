#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int d) : data(d), next(NULL) {}
};

class List
{
    // public:
    node *head;
    node *tail;

public:
    List() : head(NULL), tail(NULL) {}

    void push_front(int data)
    {
        if (head == NULL)
        {
            node *n = new node(data);
            head = tail = n;
        }
        else
        {
            node *n = new node(data);
            n->next = head;
            head = n;
        }
    }
    void push_back(int data)
    {
    }
};

int main()
{

    List a;
    a.push_front(10);
    return 0;
}