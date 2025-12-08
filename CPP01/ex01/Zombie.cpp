/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Zombie.cpp                                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:21:01 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:21:01 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string zombieName){name = zombieName;}

void Zombie::announce(){std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;}
