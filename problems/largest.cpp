 
#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
  
    cout << "Enter the first no: ";
    cin >>A;
    cout << "Enter the second no: ";
    cin>>B;
    cout << "Enter the thied no: ";
    cin>>C;
  
    if (A >= B) {
        if (A >= C)
            cout << A << " is the largest number."<<endl;
        else
            cout<< C <<" is the largest number."<<endl;
    }
    else {
        if (B >= C)
            cout << B <<" is the largest number."<<endl;
        else
            cout << C <<" is the largest number."<<endl;
    }
  
    return 0;
}