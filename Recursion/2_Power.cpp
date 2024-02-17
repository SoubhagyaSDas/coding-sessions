#include<iostream>

using namespace std;

int power(int x, int n) {
    if(n == 0) {
        return 1;
    }

    int smallOutput = power(x, n-1);
    return x * smallOutput;
}

int main() {
    int x, n;
    cout << "number: ";
    cin >> x;
    
    cout << "power: ";
    cin >> n;

    if(x <= 1 || x >= 30){
        cout << "Error" << endl;
        return 1;
    }

    if(n <= 0 && n >= 30) {
        cout << "Error" << endl;
    }

    cout << power(x, n) << endl;
    return 0;
}