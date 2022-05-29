#include <iostream>
using namespace std;

double opearator(char o,float num1,float num2){
    char o;
    float num1,num2;
    switch(o)
    {
        case '+':
            return num1+num2;
            
            break;
        case '-':
            return  num1-num2;
            break;
        case '*':
            return  num1*num2;
            break;
        case '/':
            return  num1/num2;
            break;
        default:
            /* If operator is other than +, -, * or /, error message is shown */
            cout << "Error! operator is not correct";
            break;
    }
   int main() 
   {
    char o;
    float num1,num2; 
    cout << "Enter operator either + or - or * or /: ";
    cin >> o;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    
    float result = opearator(o,num1,num2) 
    cout<<"\n\n do you want to Continue?";
    cin>>ch;
      
    return 0;
   }


 