// Write a program that takes in an integer vector array and an value as input and prints the following
// If the numerical value is present in the array or not
// If present print the first, last and all the indices it is present at
// Do it recursively and use dynamic memory allocation if needed

#include<iostream>
#include<vector>

using namespace std;

bool check(vector<int> a, int size, int num) {
    if(size == 0) {
        return 1;
    }

    if(a[0] == num || a[size - 1] == num) {
        return true;
    }
    return check(a, size - 1, num);
}

int first_index(vector<int> a, int size, int num, int current_index) {
    if(size == current_index) {
        return 1;
    }

    if(a[0] == num) {
        return current_index;
    }
    return first_index(a, size - 1, num, current_index + 1);
}

int last_index(vector<int> a, int size, int num, int current_index) {

    if(size == current_index) {
        return 1;
    }

    if(a[0] == num) {
        last_index(a, size - 1, num, current_index + 1);
    }

}

void all_index(vector<int> a, vector<int> b, int size, int num, int current_index) {

}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if(n <= 0 || n > 30) {
        cout << "Out of bound." << endl;
        return 1;
    }

    vector<int> a;
    cout << "Enter the elements of the array: ";
    for(int i = 1; i <= n; i++) {
    a.push_back(i);
    }

    int num;
    cout << "Enter the number to be searched: ";
    cin >> num;

    bool check_index = check(a, n, num);
    if(check_index) {
        cout << "Yes, " << num << " is present in the array." << endl;
        int first = first_index(a, n, num, 0);
        int last = last_index(a, n, num, 0);

        if(first == last) {
            cout << "There is only one index for " << num << " at: " << first;
            return;
        }
        cout << "\nThe first index of " << num << " is at: " << first << endl;
        cout << "\nThe last index of " << num << " is at: " << last << endl;

        vector<int> b;
        all_index(a, b, n, num, 0);
        cout << "All the indices for " << num << " is at: ";
        for(auto i = b.begin(); i != b.end(); ++i) {
            cout << *i << " ";
        } cout << endl;

    } else {
        cout << "No, " << num << " is present in the array." << endl;
    }
    return 0;
}