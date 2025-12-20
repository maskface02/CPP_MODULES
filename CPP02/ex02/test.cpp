#include <iostream>

class Fixed {
private:
    int* ptr;
public:
    Fixed(int v) { ptr = new int(v); }
    
    // ❌ Dangerous: non-const copy constructor
    Fixed(Fixed& other) {
        *other.ptr = 999;  // modifying the source temporary
        ptr = other.ptr;   // shallow copy
    }

    ~Fixed() { delete ptr; }

    int getValue() const { return *ptr; }
};

int main() {
    Fixed a = Fixed(42);  // temporary Fixed(42) is passed

    std::cout << a.getValue() << std::endl; // ???

    return 0;
}

