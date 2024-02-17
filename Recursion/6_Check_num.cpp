#include<iostream>

using namespace std;

bool checkNum(int* a, int size, int num) {
    if(size == 0) {
        return false;
    }
    
    if(a[0] == num) {
        return true;
    } else {
        return checkNum(a + 1, size - 1, num);;
    }

    return false;
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

    int num;
    cout << "Enter the number to check: ";
    cin >> num;
    bool check = checkNum(a, n, num);
    if(!check){
        cout << "False" << endl;
    } else {
        cout << "True" << endl;
    }

    delete [] a;
    return 0;
}