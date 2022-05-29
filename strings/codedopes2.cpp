#include <iostream>
#include <string>
using namespace std;

int main(){

string yes;
cout << " enter the string here "<<endl;
cin >> yes;
for (int  i = 0; i < yes.length(); i++)
{
    cout<< yes [i]<<endl;
}
cout << " Done "<<endl;

return 0;
}