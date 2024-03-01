#include <iostream>

using namespace std;

void replaceChar(char str[], char c1, char c2) {
    if(str[0] == '\0') {
        return;
    }

    if(str[0] == c1) {
        str[0] = c2;
    
    } 

    replaceChar(str + 1, c1, c2);
    
}

int main() {
    char s[100];
    cout << "Enter the string: ";
    cin >> s;

    char c1, c2;
    cout << "Enter the characters c1 and c2: ";
    cin >> c1;
    cin >> c2;
    replaceChar(s, c1, c2);
    cout << "Updated string: " << s << endl;
    return 0;
}