#include <iostream>
#include <vector>
using namespace std;


    
void permutations(string input, vector<string>& output, int i) {
    // Base case: If the iterator reaches the end of the input string, print the output
    if (i == input.length()) {
        // output.push_back(input);
        // cout << output ;
        cout << input <<endl;
        return;
    }

    for (int j = i; j < input.length(); j++) {
        // Swap the characters at positions i and j
        swap(input[i], input[j]);

        // Recursively find permutations with the updated input, output, and the incremented iterator
        permutations(input, output, i + 1);

        // Restore the original order by swapping the characters back
        swap(input[i], input[j]);
    }
}

int main()
{
    string input = "abc";
    vector<string> output;
    
    permutations(input,output,0);
    
    
    return 0;
}