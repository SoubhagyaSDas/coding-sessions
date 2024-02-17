#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
    int i = 10;
    int* p = &i; // pointer pointing to the address of i

    int** p1 = &p; // double pointer pointing to the address of pointer p

    int*** p2 = &p1; // pointer pointing to the address of the double pointer p1

    cout << &i << endl;;
    cout << p << endl;;
    cout << *p1 << endl;;
    cout << **p2 << endl;;
}