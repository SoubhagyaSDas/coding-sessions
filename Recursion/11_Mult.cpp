#include<iostream>

using namespace std;

int mult(int m, int n) {
    if(n == 0) {
        return 0;
    }

    int smallOutput = mult(m, n - 1);
    // cout << smallOutput << endl;
    return smallOutput + m;
}
int main() {
    int m, n;
    cout << "Enter the numbers: ";
    cin >> m >> n;

    cout << "The multiplication of "<< m << " & " << n << " is: " <<mult(m, n) << endl;
    return 0;
}