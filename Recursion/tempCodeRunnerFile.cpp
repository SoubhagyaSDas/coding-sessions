#include<iostream>

int load(int n, int size) {
    for(int i = 0; i < size; i++){

    }
}
int all_index(int* a, int size, int num) {
    // base case
    if(size == 0) {
        return -1;
    }

    // recursive step will shorten the array
    int position = all_index(a + 1, size - 1, num);
    
    if(a[0] == num) {
        return (position == -1) ? -1 : position; // checks if the number is same as the first element of the array
    } else {
        return (position == -1) ? -1 : position; // if not then also keep iteratin the array and brings the positions 
    }

}

int main() {
    int n;
    std::cout <<"Enter the number of elements in the array: ";
    std::cin >> n;

    if(n <= 0 || n >= 30) {
        return 1;
    }

    int* a = new int[n];
    std::cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int num;
    std::cout << "Enter the number to find the index for: ";
    std::cin >> num;
    for(int i = 0; i < n; i++){
        int position = all_index(a, i, num);
    }

    delete [] a;
    return 0;
}