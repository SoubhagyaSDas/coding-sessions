#include<iostream>

using namespace std;

float geo_sum(int k) {
    if(k == 0) {
        return 0;
    }

    return (1.0 / k) + geo_sum(k - 1);
}
 
int main() {
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    if(k < 0 || k > 30) {
        return 1;
    }
    float sum = geo_sum(k);
    cout << sum << endl;
    return 0;
}