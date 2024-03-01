#include <iostream>
#include <string>

using namespace std;

void replaceChar(string& str, char c1, char c2, size_t pos = 0) {
    if (pos == str.length()) {
        return;
    }

    if (str[pos] == c1) {
        str[pos] = c2;
    } 

    replaceChar(str, c1, c2, pos + 1);
}

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    char c1, c2;
    cout << "Enter the character to replace: ";
    cin >> c1;

    cout << "Enter the replacement character: ";
    cin >> c2;

    replaceChar(str, c1, c2);
    cout << "Updated string: " << str << endl;

    return 0;
}