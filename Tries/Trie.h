
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
    char data;
    unordered_map<char, Node *> m;
    bool isTerminal;

public:
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
            // temp -> m[ch] = n;
        }
    }
    // Searching
};