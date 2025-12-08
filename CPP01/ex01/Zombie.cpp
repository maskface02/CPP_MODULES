#include "Zombie.hpp"

void Zombie::setName(std::string zombieName){name = zombieName;}

void Zombie::announce(){std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;}
