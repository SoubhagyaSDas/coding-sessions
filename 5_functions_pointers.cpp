#include<iostream>
#include<stdio.h>

using namespace std;

void print(int* p) {
    cout << p << endl;
    cout << *p << endl;
}


void increamentPointer(int* p) {
    p = p + 1;
}

void increament(int* p) {
    (*p)++;
}

int main() {
    int i = 10;
    int* p = &i;
    
    cout << i << endl;

    cout << p << endl;
    increamentPointer(p);
    cout << p << endl;

    cout << *p << endl;
    increament(p);
    cout << *p << endl;

    print(p);
}