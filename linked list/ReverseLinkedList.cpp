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
    void reverse(node *head)
    {
        node *c = head;
        node *p = NULL;
        node *n;
        while (c != NULL)
        {
            // save the next node
            n = c->next;

            // make the current node point to previous
            c->next = p;

            // update P and C take them 1 step formward
            p = c;
            c = n;
        }
        head = p;
    }
};
int main()
{

    return 0;
}