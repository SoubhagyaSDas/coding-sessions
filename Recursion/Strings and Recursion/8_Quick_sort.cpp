#include <iostream>

using namespace std;

int partition(int* a, int si, int ei) {
    // pick a pivot
    int pivot = a[(si + ei) / 2];
    int* L = &a[si];
    int* R = &a[ei];
    while (L <= R) {
        // move the left pointer towards the right until an element greater than the pivot is found
        while (*L < pivot) {
            L++;
        }
        // move the right pointer left until an element less than pivot is found
        while (*R > pivot) {
            R--;
        }

        // if the left pointer is to the left of the right pointer, swap them
        if (L <= R) {
            swap(*L, *R);
            L++;
            R--;
        }
    }
    return R - a + 1; // or could be L - too
}

void quick_sort(int* a, int si, int ei) {
    if (si >= ei) {
        return;
    }

    int c = partition(a, si, ei);
    quick_sort(a, si, c - 1);
    quick_sort(a, c, ei);

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

    quick_sort(a, 0, n - 1);
    cout << "The array after sorting is: ";
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    } cout << endl;

    delete[] a;
    return 0;
}