#include <iostream>

using namespace std;

void merge(int* a, int si, int mid, int ei) {
    int n1 = mid - si + 1;
    int n2 = ei - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = a[si + i];
    }
    for(int j = 0; j < n2; j++) {
        R[j] = a[mid + 1 + j];
    }

    int i = 0, j = 0, k = si;
    while(i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

void merge_sort(int* a, int si, int ei) {
    // base case
    if (si >= ei) {
        return;
    }

    int mid = (si + ei) / 2;
    merge_sort(a, si, mid);
    merge_sort(a, mid + 1, ei);


    merge(a, si, mid, ei);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* a = new int[n];
    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    merge_sort(a, 0, n - 1);
    cout << "The array after sorting is: ";
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    delete[] a;
    return 0;
}