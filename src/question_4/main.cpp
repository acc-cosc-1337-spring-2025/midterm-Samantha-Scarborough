#include <iostream>  // Include the necessary header for input/output

int get_hours(int seconds_since_1970) {
    return seconds_since_1970 / 3600; // Converts seconds to hours
}

int get_minutes(int seconds_since_1970) {
    return seconds_since_1970 / 60; // Converts seconds to minutes
}

int get_seconds(int seconds_since_1970) {
    return seconds_since_1970; // Return the total seconds 
}

int main() {
    int seconds_since_1970 = 1570846218;

    int hours = get_hours(seconds_since_1970);
    int minutes = get_minutes(seconds_since_1970);
    int seconds = get_seconds(seconds_since_1970);

    std::cout << "Time: " << hours << ":" << minutes << ":" << seconds << std::endl;

    return 0;
}
