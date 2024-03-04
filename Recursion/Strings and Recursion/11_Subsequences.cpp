#include <iostream>
#include <string>

using namespace std;

int subs(string& input, string output[]) {

    // base case
    if(input.empty()) {
        output[0] = "";
        return 1;
    }

    // 

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