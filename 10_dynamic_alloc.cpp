#include<iostream>
#include<stdio.h>

using namespace std;

void enterElements(int* a, int n){
    while(n != 0){
        cin >> a[n];
        n--;
    }
}


int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* a = new int[n];
    enterElements(a, n);

    for(int i = 0; i<n; i++){
        cout << a[n];
    }

    delete a;
}