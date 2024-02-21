#include<iostream>
#include<vector>

using namespace std;

void all_indices(vector<int> &a, vector<int> &b, int size, int num, int current_index) {
    if(current_index == size) {
        return;
    }

    if(a[current_index] == num) {
        b.push_back(current_index + 1);
    }

    return all_indices(a, b, size, num, current_index + 1);
}

int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if(n <= 0 || n >= 30){
        return 1;
    }

    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int num;
    cout << "Enter the number to check: ";
    cin >> num;

    vector<int> b;
    all_indices(a, b, n, num, 0);

    if(!b.empty() == false) {
        cout << num <<" is not present in the array.";
        return 1;
    } else {
        cout << num << " is at index: ";
        for(auto i = b.begin(); i != b.end(); i++) {
            cout << *i << " ";
        } cout << endl;
    }
    return 0;
}