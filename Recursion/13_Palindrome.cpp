#include <iostream>
#include <string>

using namespace std;

string rev_str(const string& str) {
    if(str.length() <= 1) {
        return str;
    }

    string reverse = rev_str(str.substr(0, str.length() - 1));
    return str[str.length() - 1] + reverse;
}

int main() {
    string str1, str2;
    cout << "Enter the string: ";
    cin >> str1;

    str2 = rev_str(str1);
    if(str2 == str1) {
        cout << "Yes, the string is a palindrome." << endl;
    } else {
        cout << "No, the string is a palindrome." << endl;
    }
    return 0;
}