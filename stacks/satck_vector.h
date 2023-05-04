#include <vector>
using namespace std;

template <typename T>
class Stack
{
   vector <int> arr;

   public :
      void push(T data)
      {
        arr.push_back(data);
      }


      void pop()
      {
        arr.pop_back();
      }

      T top ()
      {
        int lastidx = arr.size()-1;
        return arr[lastidx];
      }

      bool empty()
      {
        if (arr.size() == 0)
        {
            return true;
        }
        else 
        {
            return false;
        }
      }
};