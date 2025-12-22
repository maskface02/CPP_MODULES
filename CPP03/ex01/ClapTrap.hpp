/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ClapTrap.hpp                                         :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/21 21:28:18 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/22 02:05:22 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap{
  private:
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
};
