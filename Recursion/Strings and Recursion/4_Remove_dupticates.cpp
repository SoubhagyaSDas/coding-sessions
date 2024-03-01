#include <iostream>

using namespace std;

void removeDuplicates(char s[]) {
    // base case
    if (s[0] == '\0') {
        return;
    }

    // induction hypothesis
   // if (s[0] == )


}

int main() {
    char s[100];
    cout << "Enter the string: ";
    cin >> s;

    removeDuplicates(s);
    cout << "Updated string: " << s << endl;
    return 0;
}