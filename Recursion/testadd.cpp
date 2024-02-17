// Array of integers, use recursions to bring addition of all elements
#include <iostream>

using namespace std;

int add(int *a, int size) {

    //base case
    if(size == 0) {
        return 1;
    }
    // IH/ recursive step
    int smallerOutput = add(a + 1, size - 1);
    return smallerOutput + a[size];
}

int main()
{
    int n;
    cout << "Enter the humber of elements in the array: ";
    cin >> n;
     
    if(n <= 0 || n >= 30){
        return 1;
    }
    int* a = new int[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << add(a, n) << endl;
    delete [] a;
    return 0;
}