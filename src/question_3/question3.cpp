#include "question3.h"

bool test_config()
{
    return true;
}

#include "fib.h"
#include <iostream>
#include <sstream>  // For constructing the string

std::string get_fib_sequence(int n) {
    if (n < 1) return ""; // Return empty string if n is invalid

    std::ostringstream sequence;
    int a = 0, b = 1;

    for (int i = 0; i < n; i++) {
        sequence << a;  // Add on the current Fibonacci number
        if (i < n - 1) sequence << " ";  // Add space unless it's the last number

        int next = a + b;  // Compute next Fibonacci number
        a = b;
        b = next;
    }

    return sequence.str(); // Return the sequence as a string
}
