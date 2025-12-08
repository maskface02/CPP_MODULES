/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Zombie.hpp                                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:21:03 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:21:03 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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
#endif

