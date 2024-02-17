#include<iostream>

using namespace std;

int pow(int x, int n) {
    if(n == 0) {
        return 1;
    }

    int smallerOutput = pow(x, n - 1);

    return smallerOutput * x;

}

// int fact(int n) { // n = 3, 2, 1

//     // base case
//     if(n == 0 || n == 1) { // TRUE
//         return 1; // break
//     }

//     // iterative hypothesis
//     int smallerOutput = fact(n - 1); // n = 1

//     // itrative step
//     return n * smallerOutput; // 3 * 2 * 1
// }

int main() {
    int n, x;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;

    // cout << "factorial of n is: " << fact(n) << endl;
    cout << "power of x is: " << pow(x, n) << endl;


    return 0;
}