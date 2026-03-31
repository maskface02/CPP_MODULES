#include <iostream>
#include <ctime>

int main() {
    std::tm time_info = {};
    time_info.tm_year = 2023 - 1900;
    time_info.tm_mon = 12 - 1;
    time_info.tm_mday = 25;
    time_info.tm_hour = 10;
    time_info.tm_min = 30;
    time_info.tm_sec = 0;

    std::time_t timestamp = std::mktime(&time_info);
    std::cerr << asctime(&time_info);
    return 0;
}   
