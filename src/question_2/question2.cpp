#include "question2.h"

bool test_config()
{
    return true;
}

#include <iostream>
#include "convert.h"  // Include the header file

// Function definition for converting Celsius to Fahrenheit
double get_fahrenheit(double c) {
    return (9.0 / 5.0) * c + 32;
}

int main() {
    double celsius;

    // User input
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    // Convert and display result
    double fahrenheit = get_fahrenheit(celsius);
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}


