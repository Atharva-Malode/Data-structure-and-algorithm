#include <iostream>
using namespace std;
void towerOfHanoi(int n, char source, char auxiliary, char destination) {  
    
    
     //function defination
    if(n==0)
    {
        return;   //base case
    }
    
    
    //recursion call to shift (n-1) disks from source to auxiliary
    towerOfHanoi(n-1,source, destination, auxiliary);
    
    cout<<source<<" "<<destination<<endl;   
    
    //recursion call to shift (n-1) disks from auxiliary to destination
    towerOfHanoi(n-1, auxiliary, source, destination);    
}

int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}