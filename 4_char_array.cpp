#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
    
    // int s[] = {1, 2, 3, 4, 5};
    // int *p = s;

    // cout << s << endl;  // s is the address of the first element of the array
    // cout << &s[0] << endl; // this will print the same address as above
    // cout << p << endl; // this will print the same address as above
    // cout << &p << endl; // this will print the address of the pointer p


    char str[] = "abcde";
    char *q = str;

    // cout << str << endl; // this will print the string
    // cout << &str << endl; // this will print the address of the string
    cout << &str[0] << endl; // this will print the entire string
    // cout << q << endl; // this will print the string as well
    // cout << *q << endl; // this will print the first element of the string

    char *r = &str[0];
    cout << r << endl; // this will print the string as well
    cout << *r << endl; // this will print the first element of the string 
}

