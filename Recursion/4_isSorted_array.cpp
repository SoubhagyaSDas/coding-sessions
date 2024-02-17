#include<iostream>

using namespace std;

bool isSorted2(int* a, int size) {
    if(size == 0 || size == 1) {
        return true;
    }

    bool smallArray = isSorted2(a + 1, size - 1);
    if(!smallArray) {
        return true;
    }

    if(a[0] > a[1]) {
        return false;
    } else {
        return true;
    }
}

bool isSorted1(int* a, int size) {
    if(size == 0 || size == 1) {
        return true;
    }

    if(a[0] > a[1]) {
        return false;
    }

    bool smallArray = isSorted1(a + 1, size - 1);
    return smallArray;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* a = new int[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if(isSorted2(a, n)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    delete [] a;
    return 0;
}