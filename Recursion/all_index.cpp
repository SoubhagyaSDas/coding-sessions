#include<iostream>
#include<vector>

bool In_array(std::vector<int> a, int size, int num) {

    if(size == 0) {
        return false;
    }

    if(a[0] == num) { // checks if the first element is true
        return true;
    } else if(a[size - 1] == num) {
        return true;
    }

    return In_array(a, size - 1, num);

}

int first_index() {

// }

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    if(n <= 0 || n >= 30) {
        return 1;
    }

    std::vector<int> a;
    for(int i = 1; i <= n; i++) {
        a.push_back(i);
    }

    int num;
    std::cout << "Enter the number you want to find the index of: ";
    std::cin >> num;

    bool check = In_array(a, n, num);
    if(check) {
        std::cout << "Yes, "<< num <<" is present in the given array";

        // int first = first_index(a, n , num);
        // std::cout << "The first index of the element is at: " << first << std::endl;

    }

    return 0;
}