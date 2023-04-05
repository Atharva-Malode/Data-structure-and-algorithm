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
    node *head;
    node *tail;

    List(int data) : head(NULL), tail(NULL) {}

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
    void reverse()
    {
        node *prev = NULL;
        node *curr = head;
        node *nxt = NULL;
        while (curr != NULL)
        {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head = prev;
    }
};
int main()
{

    return 0;
}