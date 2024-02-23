#include <iostream>
#include <string>

using namespace std;

string replaced(const string& original, const string& toreplace, const string& replacement, size_t pos = 0) {
    // base case to check if the string is empty
    if(pos == string::npos) {
        return original;
    }

    // find the position of the substring to be replaced
    size_t findPos = original.find(toreplace, pos);
    cout << findPos << endl;

    // check if the substring was fund or not
    if(findPos == string::npos) {
        return original;
    }

    string new_str = original;
    new_str.replace(findPos, toreplace.length(), replacement); // replace the position starting from the position where the substring was found, till the position where the substring ends

    return replaced(new_str, toreplace, replacement, findPos + replacement.length());
}

int main() {
    string original_str;
    cout << "Enter the original string: ";
    cin >> original_str;

    string toreplace_str;
    cout << "Enter the sub-string to be replaced: ";
    cin >> toreplace_str;

    string replacement_str;
    cout << "Enter the replacement for the substring: ";
    cin >> replacement_str;

    string changed_str = replaced(original_str, toreplace_str, replacement_str);
    cout << "The new manipulated string is: " << changed_str << endl;

    return 0;
}