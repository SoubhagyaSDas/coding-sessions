#include <iostream>
#include <string>

using namespace std;

int changed(const string& str, size_t pos = 0) {
    if(pos == str.length()) {
        return 0;
    }

    int digit = str[pos] - '0';

    int value = changed(str, pos + 1);

    return value * 10 + digit;


}

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "The string after conversion is: " << changed(str) << endl;

    return 0;
}