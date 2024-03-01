#include <iostream>

using namespace std;

void removeX(char s[]) {
    if(s[0] == '\0') {
        return;
    }

    if (s[0] != 'x' && s[0] != 'X') {
        removeX(s + 1);
    } else {
        int i = 1;
        for(; s[i] != '\0'; i++) {
            s[i - 1] = s[i];
        } 
        s[i - 1] = s[i]; // to copy the last Null character
        removeX(s); // recursive call with shortened string
    }
}

int length(char str[]) {
    if(str[0] == '\0') {
        return 0;
    }
    int smallLength = length(str + 1);
    return smallLength + 1;
}

int main() {
    char str[100];
    cout << "Enter the string: ";
    cin >> str;

    // int l = length(str);
    cout << "The string length before removing x is: " << length(str) << endl;

    removeX(str);
    cout << "Manipulated string is: " << str << endl;

    cout << "The string length after removing x is: " << length(str) << endl;
    return 0;
}