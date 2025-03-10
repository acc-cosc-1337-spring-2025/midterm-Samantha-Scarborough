#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test time conversion functions") {
    int input = 1570846218;

    REQUIRE(get_hours(input) == 2);
    REQUIRE(get_minutes(input) == 10);
    REQUIRE(get_seconds(input) == 18);
}

TEST_CASE("Test time conversion functions") {
    int input = 1570875018;

    REQUIRE(get_hours(input) == 10);
    REQUIRE(get_minutes(input) == 10);
    REQUIRE(get_seconds(input) == 18);
}