/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Zombie.cpp                                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:20:50 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:20:50 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName) : name(zombieName) {}

Zombie::~Zombie() {std::cout << name << " is destroyed" << std::endl;}

void Zombie::announce(){std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;}
