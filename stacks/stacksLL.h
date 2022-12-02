#include <bits/stdc++.h>

// template <typename T>
// class Stack;

template <typename T>
class Node
{

public:
    T data;
    Node<T> *next;

    Node(T d)
    {
        data = d;
    }
};

template <typename T>
class stack
{

    Node<T> *Head;

public:
    stack()
    {
        Head = NULL;
    }
    void push(T data)
    {

        Node<T> *n = new Node<T>(data);
        n->next = Head;
        Head = n;
    }
    T top()
    {
        return Head->data;
    }
    void pop()
    {
        if (Head != NULL)
        {
            Node<T> *temp = Head;
            Head = Head->next;
            delete temp;
        }
    }
};
