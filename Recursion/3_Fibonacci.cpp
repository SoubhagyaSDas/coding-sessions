#include<iostream>

using namespace std;

int fibo(int n) {
    //base case checks for n = 0, in which case it returns 0
    if(n == 0) { // this is confusing as what if the user enters 0, the function should technically return 0
        return 0; // n = 0 returns 0
    }

    //base case checks for n = 1, in which case it returns 1
    else if(n == 1){
        return 1; // n = 1 returns 1
    }

    //Iterative hypothesis, assumes that the function will return a smaller outputs,i.e, steps - 1 in this case and step - 2
    int smallOutput1 = fibo(n-1); // n = 2, smallerOutput1 = 1
    int smallOutput2 = fibo(n-2); // n = 2, smallerOutput2 = 0

    //Iterative step will return the smaller output and the sum of the 
    return smallOutput1 + smallOutput2; // 0 + 1 = 1 --> the third variable

}

int main() {
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;

    if(n <= 0 || n > 30) {
        return 1;
    }

    for(int i = 0; i < n; i++) {
        cout << fibo(i) << " ";
    }
    cout << endl;

    return 0;
}