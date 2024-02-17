#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    cout << "enter a number: ";
    int i;
    cin >> i;
    int *p = &i;

    cout << "i = " << i << endl;
    cout << "&i = " << &i << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
}