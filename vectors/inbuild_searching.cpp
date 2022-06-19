#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    
        vector <int> a = {1,2,3,4,5,6};
        int key;
        cin >> key;
    vector <int> :: iterator it = find (a.begin(),a.end(),key);

    if (it != a.end()){
          cout <<"The element found at index : "<< it-a.begin()<<endl;
    }
    else{
        cout <<"The Element not found "<<endl;
    }
return 0;
}