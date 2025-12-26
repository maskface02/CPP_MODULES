/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ClapTrap.hpp                                         :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/21 21:28:18 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/24 16:02:51 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap{
  protected:
    std::string name;
    unsigned int hitPts;
    unsigned int energyPts;
    unsigned int attackDmg;

  public:
    ClapTrap();
    ClapTrap(const std::string& n);
    ClapTrap(const ClapTrap& otherObj);
    ClapTrap& operator=(const ClapTrap& otherObj);
    ~ClapTrap();

    void beRepaired(unsigned int amount);
    void takeDamage(unsigned int amount);
    void attack(const std::string& target);

    std::string  getName() const;
    unsigned int getHitPts() const;
    unsigned int getEnergyPts() const;
    unsigned int getAttackDmg() const;
};

#endif
