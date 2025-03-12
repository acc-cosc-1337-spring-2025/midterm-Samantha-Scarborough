
#include <iostream>
#include "fibonacci.h"

int main() {
    int n;
    char choice;

    do {
        // 1) Prompt user for a number and validate input
        do {
            std::cout << "Enter a number (1 to 15) for the Fibonacci sequence: ";
            std::cin >> n;

            if (n < 1 || n > 15) {
                std::cout << "Invalid input! Please enter a number between 1 and 15.\n";
            }
        } while (n < 1 || n > 15); // Repeat until a valid number has been entered

        // 2) Pass the number to get_fib_sequence function
        std::string result = get_fib_sequence(n);

        // 3) Display the Fibonacci sequence
        std::cout << "Fibonacci Sequence: " << result << std::endl;

        // 4) Ask the user if they want to continue
        std::cout << "Generate another sequence? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Repeat until user chooses to exit the program

    std::cout << "Program exited.\n";

    return 0;
}