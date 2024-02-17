#include<iostream>
#include<vector>

void all_index(int* a, int size, int num, std::vector<int> indices, int current_index) {

    if(current_index == size) {
        return;
    }

    if(a[current_index] == num) {
        indices.push_back(current_index);
    } 

    all_index(a, size, num, indices, current_index + 1);


}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
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
    std::cout << "Enter the number you want to find the index of: ";
    std::cin >> num;

    std::vector<int> indices;
    all_index(a, n, num, indices, 0); 

    if(indices[0] == 0) {
        std::cout << "Number is not present in the array.";
    } else {
        std::cout << "The " << num << " is stored in indices: ";
        for(int position : indices) {
            std::cout << position << ", ";
        } std::cout << std::endl;
    }

    delete [] a;
    return 0;
}