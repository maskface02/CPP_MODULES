#include <iostream>
#include <limits>
#include <cmath>

int main() {
    int i = NAN;
    double nanValue  = std::numeric_limits<double>::quiet_NaN();
    double posInf    = std::numeric_limits<double>::infinity();
    double negInf    = -std::numeric_limits<double>::infinity();

    std::cout << "nanValue  = " << nanValue << std::endl;
    std::cout << "posInf    = " << posInf << std::endl;
    std::cout << "negInf    = " << negInf << std::endl;

    std::cout << "\nComparisons:" << std::endl;
    std::cout << "nan == nan: " << (nanValue == nanValue ? "true" : "false") << std::endl;
    std::cout << "posInf > 1000000: " << (posInf > 1000000 ? "true" : "false") << std::endl;
    std::cout << "negInf < -1000000: " << (negInf < -1000000 ? "true" : "false") << std::endl;

    std::cout << "\nCheck functions:" << std::endl;
    std::cout << "isnan(nanValue): " << (std::isnan(nanValue) ? "true" : "false") << std::endl;
    std::cout << "isinf(posInf): " << (std::isinf(posInf) ? "true" : "false") << std::endl;
    std::cout << "isinf(negInf): " << (std::isinf(negInf) ? "true" : "false") << std::endl;

    return 0;
}

