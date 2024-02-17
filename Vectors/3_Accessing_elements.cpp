#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30};

    // Access elements using []
    int firstElement = numbers[0];  // 10

    // Access elements using at()
    int secondElement = numbers.at(1);  // 20

    return 0;
}
