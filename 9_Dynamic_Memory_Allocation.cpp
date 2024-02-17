#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int* a = new int[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "The elements are: ";
    for(int i = 0; i < n; i++) {
        cout << *(a+i) << " ";
    }cout << endl;

    int max = a[0];
    for(int i = 1; i < n; i++) {
        if(max < a[i]) {
            max = a[i];
        }
    }
    cout << "max: " << max << endl;
    delete [] a;
}