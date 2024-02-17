#include<iostream>

using namespace std;

int fib(int i) { //i=2
    //base case
    if(i == 0) {
        return 0;
    }
    if (i == 1){
        return 1;
    }

    //induction hypothesis
    int smallOutput_1 = fib(i - 1);
    int smallOutput_2 = fib(i - 2);

    return smallOutput_1 + smallOutput_2; 


    //induction step

}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if(n <= 0 || n > 30) {
        return 1;
    }
     
    cout << fib(4) << endl;
    // for(int i = 0; i < n; i++) {
    //     cout << fib(i) << ", "; // fib i = 3
    // }cout << endl;
    return 0;
}