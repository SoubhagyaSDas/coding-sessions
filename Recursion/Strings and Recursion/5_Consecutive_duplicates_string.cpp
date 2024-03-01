#include <iostream>
#include <string>

using namespace std;

void removeDuplicate(string& str, size_t pos = 0) {
    if (pos >= str.length() - 1) { // base case checks if the pos does not exceed the string length
        return;
    }

    if (str[pos] == str[pos + 1]) {
        str.erase(pos + 1, 1);
    } 
    removeDuplicate(str, pos + 1);
}

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    removeDuplicate(str);

    cout << "Updated string: " << str << endl;
    return 0;
}