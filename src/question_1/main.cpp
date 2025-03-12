#include <iostream>

// Function demonstrating value and reference parameters
void modifyValues(int valParam, int& refParam) {
    valParam += 10;  // Modifies only a copy, does not affect original
    refParam += 10;  // Modifies the original variable
}

int main() {
    int a = 5, b = 5;

    std::cout << "Before function call:" << std::endl;
    std::cout << "a (value parameter) = " << a << ", b (reference parameter) = " << b << std::endl;

    modifyValues(a, b);

    std::cout << "After function call:" << std::endl;
    std::cout << "a (value parameter) = " << a << " (unchanged)" << std::endl;
    std::cout << "b (reference parameter) = " << b << " (modified)" << std::endl;

    return 0;
}
