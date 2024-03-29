
/*
Trie is  a Data Structure used insted of Hashmap tp solve long hash table issue
 - genreic Tree Like Data structure
 - Efficient information retrival data structure
 - Searches in optimal Time o (key length) but uses extra storage

 Imporatnt Operations
 - Inster a new word
 - Search for a given Words

 Also Called Preffix Sum

*/

#include <iostream>
#include <unordered_map>
using namespace std;

class Node
{
public:
    char data;
    bool isTerminal;

    unordered_map<char, Node *> m;
    Node(char data)
    {
        this->data = data;
        isTerminal = false;
    }
};

class Triee
{
    Node *root;

public:
    Triee()
    {
        root = new Node('\0');
    }
    // Insertion
    void insert(string word)
    {
        Node *temp = root;
        for (char ch : word)
        {
            Node *n = new Node(ch);
            temp->m[ch] = n;
        }
        temp->isTerminal = true;
    }
    // Searching
    bool search(string word)
    {
        Node *temp = root;
        for (char ch : word)
        {
            if (temp->m.count(ch) == 0)
            {
                return false;
            }
            temp = temp->m[ch];
        }
        return temp->isTerminal;
    }
};