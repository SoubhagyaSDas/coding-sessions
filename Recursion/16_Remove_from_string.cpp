#include <iostream>
#include <string>

using namespace std;

string removed_str(const string& str, const string& toRemove, size_t pos = 0) {

    if(pos == string::npos) {
        return str;
    }

    size_t findPos = str.find(toRemove, pos);

    if(findPos == string::npos) {
        return str;
    } 

    string remove_str = str;
    remove_str.erase(findPos, toRemove.length());
    return removed_str(remove_str, toRemove, findPos);

}

int main() {
    string original, toremove, manipulated;
    cout << "Enter the string: ";
    getline(cin, original);

    cout << "\nEnter the substring to remove: ";
    cin >> toremove;

    manipulated = removed_str(original, toremove);
    cout << "\nNew manipulated string is: " << manipulated << endl;

    return 0;
}