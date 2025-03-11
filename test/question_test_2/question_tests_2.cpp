#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

#define CATCH_CONFIG_MAIN  
#include "catch.hpp"  
#include "temperature_conversion.h"  

// Test cases for get_fahrenheit function
TEST_CASE("Test Celsius to Fahrenheit conversion") {
    REQUIRE(get_fahrenheit(37) == Approx(98.6).margin(0.01));
    REQUIRE(get_fahrenheit(25) == Approx(77.0).margin(0.01));
    REQUIRE(get_fahrenheit(0) == Approx(32.0).margin(0.01));
}
