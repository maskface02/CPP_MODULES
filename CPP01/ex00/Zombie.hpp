/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Zombie.hpp                                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:20:52 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:20:53 by zatais            #+#    #+#             */
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
    Zombie(std::string zombieName);
    ~Zombie();
    void announce(void);
};

Zombie* newZombie(std::string name); 
void randomChump(std::string name);
#endif
