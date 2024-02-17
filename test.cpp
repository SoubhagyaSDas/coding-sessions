// Create a 2d array and print a pattern of stairs and stars
// Use recursion
// Use vectors
// Use hashmaps
// Compare

#include<iostream>

using namespace std;

int main() {
    int j = 0;
        int i = 99;
            for (int i = 0; i < 3; i++) {
                for (int i = 0; i < 3; i++) {
                    cout << j << endl;
                    j += i;
                    cout << j << endl;
                    }
                }
                cout << i << "\n";
                cout << j << "\n";
}