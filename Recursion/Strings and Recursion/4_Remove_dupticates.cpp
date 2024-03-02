#include <iostream>

using namespace std;

void removeDuplicate(char str[]) {
    if (str[0] == '\0') {
        return;
    }

    int i = 1;

    if (str[i] == str[i + 1]) {
        str[i - 1] = str[i];
    }


}

int main() {
    char str[100];
    cout << "Enter the string: ";
    cin >> str;

    removeDuplicate(str);
    cout << "Updated string: " << str << endl;
    return 0;
}