#include <iostream>

using namespace std;

void merge(int* a, int si, int mid, int ei) {

    // these calculate the sizes of the two array segments
    int n1 = mid - si + 1;
    int n2 = ei - mid;

    // dynamic arrays to store the segments
    int* L = new int[n1];
    int* R = new int[n2];

    // loading the left and right array elements into the newly created arrays
    for (int i = 0; i < n1; i++) {
        L[i] = a[si + i];
    }
    for(int j = 0; j < n2; j++) {
        R[j] = a[mid + 1 + j];
    }

    // i and j will iterate over the Left and Right temporary arrays, and "k" will iterate over the original array
    int i = 0, j = 0, k = si;

    // Loop to compare between the elements of the left array with the elements of the right array
    while(i < n1 && j < n2) {   // check condition checks if the values of i and j is below the value of the array size
        if (L[i] <= R[j]) {     // checks if the left side element is smaller than the right side
            a[k] = L[i];        // then copies the values into the original array
            i++;                // increaments the value of i by one integer
        } else {                // if the right side element is smaller than the left side
            a[k] = R[j];        // then the right side element is copied into the original array
            j++;                // increaments the right side array by one integer
        }
        k++;                    // increaments the original array to move one place
    }

    while (i < n1) {            // in case if there is any reamaining elements in the array it copies them
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }

    delete[] L;                 // deletes the temporary arrays
    delete[] R;
}

void merge_sort(int* a, int si, int ei) {
    // base case checks for the starting index is greater than or equal to the end index
    // if greater than then the array has reached it's end
    // if equal then the array has one element
    if (si >= ei) {
        return;
    }

    // mid point of the array, this will be used to divide the array into two parts
    int mid = (si + ei) / 2;

    // recursive call on the left and right parts fo the array {The parts may or may not be equal in length}
    merge_sort(a, si, mid);
    merge_sort(a, mid + 1, ei);

    // function to merge the sorted left and right halves of the array segment
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
    } cout << endl;

    delete[] a;
    return 0;
}