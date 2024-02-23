#include <iostream>

int sum_digits(int n) {
    if(n <= 9) {
        return n;
    }

    return n % 10 + sum_digits(n / 10);
}

int main() {
    int n; 
    std::cout << "Enter the integer: ";
    std::cin >> n;

    if(n == 0) {
        std::cout << "Enter a non-zero value." << std::endl;
        return 1;
    }

    if(n < 0) {
        std::cout<< "Enter a positive integer." << std::endl;
        return 1;
    }

    int sum = sum_digits(n);
    std::cout << "The sum of the digits in "<< n << " is: " << sum << std::endl;
    return 0;
    
    
}