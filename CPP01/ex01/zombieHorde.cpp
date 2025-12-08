/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   zombieHorde.cpp                                      :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:21:06 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:21:06 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

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
