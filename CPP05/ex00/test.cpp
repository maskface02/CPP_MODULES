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
    Test t;
    throw std::runtime_error("Exception from function");
}

int main() {
    try {
      Test t;
      throw std::runtime_error("Exception from function");
      std::cout << "hello" << std::endl;
    }
    catch (const std::exception& e) {
      std::cout << "Caught: " << e.what() << "\n";
    }
}

