/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   newZombie.cpp                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:20:56 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:20:56 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    Zombie* zombie = new Zombie(name);
    return zombie;
}

