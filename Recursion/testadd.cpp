#include <iostream>
#include <vector>

using namespace std;

int add(vector<int> &a, int size) {

    //base case
    if(size == 0) {
        return 0;
    }
    // IH/ recursive step
    
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
     
    if(n <= 0 || n >= 30){
        cout << "Out of bounds." << endl;
        return 1;
    }

    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int sum = add(a, n);
    cout << "The sum of the elements is: " << sum << endl;
    
    return 0;
}
