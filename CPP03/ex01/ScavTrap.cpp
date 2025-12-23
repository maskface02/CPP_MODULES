/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ScavTrap.cpp                                         :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@staudent.1337.ma>             +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/22 15:50:21 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/22 15:50:21 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default") {
  hitPts = 100;
  energyPts = 50;
  attackDmg = 20;
  std::cout << "ScavTrap named: " << name << " constructed with default values" << std::endl;
}

ScavTrap::ScavTrap(const std::string &n) : ClapTrap(n) {
  hitPts = 100;
  energyPts = 50;
  attackDmg = 20;
  std::cout << "ScavTrap named: " << name << " constructed with default values" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& otherObj) : ClapTrap(otherObj.name) {
  hitPts = otherObj.hitPts;
  energyPts = otherObj.energyPts;
  attackDmg = otherObj.attackDmg;
  std::cout << "ScavTrap named: " << name << " copied" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& otherObj) {
  std::cout << "ScavTrap Assignation operator called" << std::endl;
  if (this != &otherObj) {
    name = otherObj.name;
    hitPts = otherObj.hitPts;
    energyPts = otherObj.energyPts;
    attackDmg = otherObj.attackDmg;
  }
  std::cout << "ScavTrap named: " << name << " assigned" << std::endl;
  return *this;
}

ScavTrap::~ScavTrap(){std::cout << "scavtrap named: "<< name << " deleted" << std::endl;}

/**********************************************************************************************************************************************************/

void ScavTrap::attack(const std::string& target) {
  if (energyPts > 0 && hitPts > 0) {
      energyPts--;
      std::cout << "ScavTrap named: " << name << " attacks " << target << ", causing " << attackDmg << " points of damage!" << std::endl;
  }
  else
      std::cout << "ScavTrap named: " << name << " has insufficient energy or hit points to attack" << std::endl;
}

void ScavTrap::guardGate(){
  if (hitPts > 0)
    std::cout << "ScavTrap named: " << name << " in Gatekeeper made"<< std::endl;
  else
    std::cout << "ScavTrap named: " << name << " has been destroyed!" << std::endl;
}




