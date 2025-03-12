//
bool test_config();

#ifndef TIME_UTILS_H
#define TIME_UTILS_H

// Function prototypes for converting seconds since 1970
int get_hours(int seconds_since_1970);
int get_minutes(int seconds_since_1970);
int get_seconds(int seconds_since_1970);

#endif // TIME_UTILS_H
