add_executable(q_04_tests "question_tests_4.cpp")
target_link_libraries(q_04_tests q_04_library)
add_test(NAME q_04_tests COMMAND q_04_tests -s)

int get_hours(int seconds_since_1970) {
    return seconds_since_1970 / 3600; // Converts seconds to hours
}

int get_minutes(int seconds_since_1970) {
    return seconds_since_1970 / 60; // Converts seconds to minutes
}

int get_seconds(int seconds_since_1970) {
    return seconds_since_1970; // Return the total seconds 
}

