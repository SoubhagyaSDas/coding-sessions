#include<iostream>
#include<string>

using namespace std;

string check(string str, int size) {
    if(size == 0) {
        return " ";
    }
    string rev_str = check(str, size - 1);
    return rev_str;
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    string str1 = check(str, str.length());
    cout << str1 << endl;
    
}