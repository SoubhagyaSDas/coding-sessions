#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

    // 1-D Array alocation
    // int n;
    // cin >> n;
    // int* p = new int[n];


    // 2-D Array allocation
    int m, k;
    cin >> m;
    cin >> k;
    int** p1 = new int*[m];

    // delete [] p;
    delete [] p1; // Will only delete the first row not the entire thing from the memory
    
    // Proper way of deleting will be
    for (int i = 0; i < m; i++) {
        delete [] p1[i];
    }
    delete [] p1;
    return 0;
}