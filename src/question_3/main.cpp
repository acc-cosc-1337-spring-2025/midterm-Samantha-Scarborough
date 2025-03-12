
#include "fib.h"
#include <iostream>

int main() {
    while (true) {
        int num;

        // Prompt user for input
        std::cout << "Enter a number (1-15) to get Fibonacci sequence, or 0 to exit: ";
        std::cin >> num;

        // Exit condition
        if (num == 0) {
            std::cout << "Exiting program.\n";
            break;
        }

        // Validate input
        if (num < 1 || num > 15) {
            std::cout << "Invalid input! Please enter a number between 1 and 15.\n";
            continue;
        }

        // Generate and display the Fibonacci sequence
        std::string fib_sequence = get_fib_sequence(num);
        std::cout << "The Fibonacci Sequence: " << fib_sequence << "\n\n";
    }

    return 0;
}
