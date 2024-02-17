#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
    int a[10];
    cout << a << endl;
    cout << &a[0] << endl;

    a[0] = 5;
    a[1] = 10;
    cout << a[0] << endl;
    cout << *(a + 1) << endl;

    int *p = a;

    cout << sizeof(a) << endl;
    cout << sizeof(a[0]) << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;
    
}