#include <iostream>
#include <string>

using namespace std;

int main() {
    // dynamically allocating strings
    string* sp = new string;
    *sp = "Dynamic string";
    cout << "sp: " << sp << endl;
    cout << "*sp: " << *sp << endl;

    cout << "Enter input: ";
    getline(cin, *sp);
    cout << "*sp: " << *sp << endl;
    cout << "sp[0]: " << sp[0] << endl;

    string s1;
    getline(cin, s1);
    cout << "size of the current string: " << s1.length();

    
    return 0;
}