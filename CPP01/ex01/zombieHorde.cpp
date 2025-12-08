#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name) {
	int		i = -1;
	Zombie	*z = new Zombie[n];

	while (++i < n) {
    z[i].setName(name);
		z[i].announce();
	}
	return (z);
}
