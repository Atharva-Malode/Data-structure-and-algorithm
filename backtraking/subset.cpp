#include<iostream>

using namespace std;

// we have passed two character arrays here and the two pointers pointig i and j here 
void subset(char *input,char *output,int i,int j){

    //base case
    if(input[i] == '\0'){
        output[j]='\0';
        //just to show the null character
        if(output[0] == '\0'){
            cout<<"Null";
        }
        cout <<output<<" ";
        return;
    }
    //recursive case 
    output[j] = input[i];
    subset(input,output,i+1,j+1);
    // case 2 for second call with a + 1
    subset(input,output,i+1,j); 

}

int main(){
    char input[100];
    char output[100];
   cin >> input;
   subset(input,output,0,0);

return 0;
}