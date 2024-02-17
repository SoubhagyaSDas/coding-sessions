#include<iostream>
#include<stdio.h>

using namespace std;

int increment(int& n) {
    n++;
    return n;
}

int& f(int n) {
    n++;
    return n;
}

int main() {
    int i = 10;
    int &j = i;

    i++;
    cout << j << endl;

    int k = increment(i);
    cout << k << endl; //k = 12
    cout << i << endl; //i = 12

    int k1 = f(i);
    cout << k1 << endl;
    cout << i << endl;
}