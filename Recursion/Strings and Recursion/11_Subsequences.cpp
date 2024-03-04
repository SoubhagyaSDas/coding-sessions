#include <iostream>
#include <string>

using namespace std;

int subs(string& input, string output[]) {

    // base case
    if(input.empty()) {
        output[0] = "";
        return 1;
    }

    // substring to return all the substrings, each time removing the first character from the string
    string smallString = input.substr(1);

    // recursive call over the subsequences function
    int smallOutputSize = subs(smallString, output);

    // adds the first character into all the subsequences
    for (int i = 0; i < smallOutputSize; i++) {
        output[i + smallOutputSize] = input[0] + output[i];
    }

    return 2 * smallOutputSize;
}

int main() {
    string input;
    cout << "Enter the string: ";
    getline(cin, input);

    string* output = new string[1000];
    int n = subs(input, output);
    for(int i = 0; i < n; i++) {
        cout << output[i] << endl;
    }
    return 0;
}