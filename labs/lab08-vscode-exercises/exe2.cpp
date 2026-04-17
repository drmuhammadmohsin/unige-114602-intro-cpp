#include <iostream>
#include <ctime>

int main() {
    // Get current time in seconds since Jan 1, 1970 (Unix epoch)
    time_t now = time(0);
    std::cout << now << std::endl;
    // Convert seconds since epoch to hours, minutes, seconds
    // (GMT/UTC time, since we are not using localtime)
    long seconds = now % 86400;   // seconds in a day
    int hour = seconds / 3600;
    int minute = (seconds % 3600) / 60;
    int second = seconds % 60;

    // Print with manual formatting (no setfill)
    if (hour < 10) std::cout << "0";
    std::cout << hour << ":";

    if (minute < 10) std::cout << "0";
    std::cout << minute << ":";

    if (second < 10) std::cout << "0";
    std::cout << second << std::endl;

    return 0;
}
