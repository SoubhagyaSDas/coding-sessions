#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    cout << "size: " << s.size() << endl;
    cout << "length: " << s.length() << endl;

    // substring returns everything that goes beyond the index 3
    cout << s.substr(3) << endl;

    // subtring returns everything that starts from 3rd place but only goes upto 3 places from 3rd index
    cout << s.substr(3, 3) << endl;

    cout << "Find: " << s.find("d") << endl;
    return 0;
}