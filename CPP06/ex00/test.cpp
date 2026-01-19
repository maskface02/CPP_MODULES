#include <iostream>
#include <string>
#include <cstdlib>
#include <cerrno>
#include <limits>

int main() {
    std::string input;

    // Test values
    const char* tests[] = {
        "123",
        "2147483647",              // INT_MAX
        "2147483648",              // INT_MAX + 1
        "-2147483648",             // INT_MIN
        "-2147483649",             // INT_MIN - 1
        "9223372036854775807",     // LLONG_MAX
        "9223372036854775808",     // LLONG_MAX + 1 (overflow for long long)
        "18446744073709551616",    // > 2^64 (way out of range)
        NULL
    };

    for (int i = 0; tests[i] != NULL; ++i) {
        const char* literal = tests[i];
        std::cout << "---- literal: " << literal << std::endl;

        // Use strtoll for parsing
        errno = 0;
        char* endptr = NULL;
        long long val = std::strtoll(literal, &endptr, 10);

        if (errno == ERANGE) {
            std::cout << "strtoll: OUT OF RANGE for long long" << std::endl;
        } else {
            std::cout << "strtoll parsed: " << val << std::endl;

            // Now check if fits in int
            if (val < std::numeric_limits<int>::min() ||
                val > std::numeric_limits<int>::max()) {
                std::cout << "int overflow detected!" << std::endl;
            } else {
                std::cout << "fits in int: " << static_cast<int>(val) << std::endl;
            }
        }

        // Compare with atoll behavior
        long long val2 = std::atoll(literal);
        std::cout << "atoll parsed (no errno): " << val2 << std::endl;

        std::cout << std::endl;
    }

    return 0;
}

