/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   FragTrap.cpp                                         :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@staudent.1337.ma>             +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/23 14:08:44 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/23 14:08:44 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default") {
  hitPts = 100;
  energyPts = 100;
  attackDmg = 30;
  std::cout << "FragTrap named: " << name << " constructed with default values" << std::endl;
}

FragTrap::FragTrap(const std::string &n) : ClapTrap(n) {
  hitPts = 100;
  energyPts = 100;
  attackDmg = 30;
  std::cout << "ClapTrap named: " << name << " constructed with default values" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& otherObj)
{
  std::cout << "ClapTrap Assignation operator called" << std::endl;
  if (this != &otherObj) {
    name = otherObj.name;
    hitPts = otherObj.attackDmg;
    energyPts = otherObj.energyPts;
    attackDmg = otherObj.attackDmg;
  }
  std::cout << "ClapTrap named: " << name << " assigned" << std::endl;
  return *this;
}

ClapTrap::~ClapTrap(){std::cout << "scavtrap named: "<< name << " deleted" << std::endl;}

/***********************************************************************************************/

void FragTrap::highFivesGuys(){
  if (hitPts > 0)
    std::cout << "ClapTrap named: " << name << " do high-Fives" << std::endl;
  else
    std::cout << "ClapTrap named: " << name << " has been destroyed!" << std::endl;
}
