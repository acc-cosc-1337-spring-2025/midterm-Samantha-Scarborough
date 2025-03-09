#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
// Test case for the the value and reference parameters
TEST_CASE("Testing value and reference parameters") {
    // Test case 1
    int value = 10;
    int ref = 20;
    
    modifyParameters(value, ref);

    // The value parameter is passed by value, so the original value doesn't change
    REQUIRE(value == 10);  // The value of `value` remains unchanged
    
    // The reference parameter is passed by reference, so the original `ref` changes
    REQUIRE(ref == 30);  // The value of `ref` changes to 30
}