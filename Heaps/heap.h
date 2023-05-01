#include <vector>

using namespace std;

class Heap 
{
    vector <int> v;
    void Heapify(int i)
    {
      int mididx   = i;
      int left  = 2 * i;
      int right = 2*i +1;

      if(left < v.size() and v[left] < v[i])
      {
           int midIdx = left;
      }
      if (right < v.size() and v[right] < v[mididx])
      {
          mididx = right;
      }
      if(mididx != i)
      {
        swap(v[i],v[mididx]);
        Heapify(mididx);
      }
    }
  public:
     Heap (int default_size = 10)
     {
         v.reserve(default_size + 1);
         v.push_back(-1);
     }

     void push(int data)
     {
          v.push_back(data);
          int idx = v.size()-1;
          int parent = idx/2;

          while(idx > 1 and v[idx] < v[parent])
          {
               swap(v[idx],v[parent]);
               idx = parent; 
               parent = parent/2;
          } 
     }
     int getMin(int data)
     {
        return v[1];
     }
     void pop()
     {
        //swap the top and bottom most element and call heapify
        int idx = v.size()-1;
        swap (v[1],v[idx]);
        v.pop_back();
        Heapify(1);
     }

     bool empty()
     {
        return v.size() == 1;
     }
};