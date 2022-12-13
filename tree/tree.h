#include <vector>
using namespace std;

template <typename T> // Template class to allow any type of data to be stored in tree
class Tree
{
public:
    T data;
    vector<tree *> child; // created for storing multiple child values of single no
    Tree(T d)             // constructor
    {
        this->data = d;
    }
};