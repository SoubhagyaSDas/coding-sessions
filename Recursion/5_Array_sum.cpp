#include<iostream>

using namespace std;

int add(int* a, int size) {
    if(size == 0) {
        return 0;
    }
    int sum = add(a + 1, size - 1);
    return sum + a[0];
}

int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if(n <= 0 || n >= 30){
        return 1;
    }

    int* a = new int[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << add(a, n) << endl;

    delete [] a;
    return 0;
}