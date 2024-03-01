#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

string removeDuplicates(const string& str) {
    string result;
    unordered_set<char> seen;

    for(char c : str) {
        if(seen.find(c) == seen.end()) {
            result += c;
            seen.insert(c);
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    string result = removeDuplicates(str);

    cout << "Updated string: " << result << endl;
    return 0;
}