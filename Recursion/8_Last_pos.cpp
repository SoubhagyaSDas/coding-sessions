#include<iostream>

using namespace std;

// int last_pos(int* a, int size, int num) {
//     if(size == 0) {
//         return -1;
//     }

//     if(a[0] == num) {
//         int position = last_pos(a + 1, size - 1, num);
//         if(position == -1) {
//             return 1;
//         } else {
//             return position + 1;
//         }
//     } else {
//         int position = last_pos(a + 1, size - 1, num);
//         if(position == -1) {
//             return -1;
//         } return position + 1;
//         return (position == -1) ? 1 : position + 1;
//     }

//     return -1;
// }

int last_pos(int* a, int size, int num) {
    if(size == 0) {
        return -1;
    }

    int position = last_pos(a + 1, size - 1, num);
    if(a[0] == num) {
        if(position == -1) {
            return 1;
        } else {
            return position + 1;
        }
    } else {
        if(position == -1) {
            return -1;
        } else {
            return position + 1;
        }
    }

    return -1;
}

int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if(n <= 0 || n >= 30){
        return 1;
    }

    int* a = new int[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int num;
    cout << "Enter the number to check: ";
    cin >> num;
    int position = last_pos(a, n, num);
    if(position == -1){
        cout << "Number not present in the array." << endl;
    } else {
        cout << "The last location of the number is: " << position << endl;
    }

    delete [] a;
    return 0;
}