#include <iostream>
#include <string>

using namespace std;

string changed_string(const string& str, char ch, size_t pos = 0) {
    if (pos == str.length()) {
        return str;
    }
    
    string s = str;
    if (str[pos] == str[pos + 1]) {
        s.insert(pos + 1, 1, ch); 
    }
    
    return changed_string(s, ch, pos + 1);
}

int main() {
    string str1, str2;
    cout << "Enter the string: ";
    getline(cin, str1);

    char ch1;
    cout << "Enter the character you wish to enter: ";
    cin >> ch1;

    str2 = changed_string(str1, ch1);
    cout << "The new string is: " << str2 << endl;

    return 0;
}
