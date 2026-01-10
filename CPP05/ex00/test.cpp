#include <iostream>
#include <stdexcept>

class Test {
public:
    ~Test() {
        std::cout << "Destructor called\n";
        throw std::runtime_error("Exception from destructor");
    }
};

void func() {
    Test t;  // object with throwing destructor
    throw std::runtime_error("Exception from function");
}

int main() {
    try {
        func();
    } catch (const std::exception& e) {
        std::cout << "Caught: " << e.what() << "\n";
    }
}

