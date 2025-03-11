#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
#define CATCH_CONFIG_MAIN  // Enables Catch2's main function
#include "catch.hpp"
#include "fibonacci.h"  // Include the Fibonacci function prototype

TEST_CASE("Test Fibonacci sequence generation") {
    // Test case for get_fib_sequence(5)
    REQUIRE(get_fib_sequence(5) == "0 1 1 2 3 5");

    // Test case for get_fib_sequence(7)
    REQUIRE(get_fib_sequence(7) == "0 1 1 2 3 5 8");

	// Test case for get_fib_sequence(10)
    REQUIRE(get_fib_sequence(10) == "0 1 1 2 3 5 8 13 21 34 55");

	// Test case for get_fib_sequence(12)
	REQUIRE(get_fib_sequence(12) == "0 1 1 2 3 5 8 13 21 34 55 89 144");
}
