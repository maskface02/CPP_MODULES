#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;

public:
    void setName(std::string zombieName);
    void announce(void);
};

Zombie* zombieHorde( int N, std::string name);
