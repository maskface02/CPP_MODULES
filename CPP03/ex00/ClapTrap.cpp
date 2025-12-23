/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ClapTrap.cpp                                         :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/22 02:12:35 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/22 02:12:37 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPts(10), energyPts(10), attackDmg(0) {
  std::cout << "ClapTrap named: " << name << " constructed with default values" << std::endl;
}

ClapTrap::ClapTrap(const std::string& n) : name(n), hitPts(10), energyPts(10), attackDmg(0) {
  std::cout << "ClapTrap named: " << name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& otherObj) : name(otherObj.getName()), hitPts(otherObj.getHitPts()), energyPts(otherObj.getEnergyPts()), attackDmg(otherObj.getAttackDmg()) {
  std::cout << "ClapTrap named: " << name << " copied" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& otherObj) {
  std::cout << "ClapTrap Assignation operator called" << std::endl;
  if (this != &otherObj) {
    name = otherObj.getName();
    hitPts = otherObj.getHitPts();
    energyPts = otherObj.getEnergyPts();
    attackDmg = otherObj.getAttackDmg();
  }
  std::cout << "ClapTrap named: " << name << " assigned" << std::endl;
  return *this;
}

ClapTrap::~ClapTrap(){std::cout << "ClapTrap named: " << name << " deleted" << std::endl;}

/*****************************************************************************************************************************************/

void ClapTrap::attack(const std::string& target) {
  if (energyPts > 0 && hitPts > 0) {
      energyPts--;
      std::cout << "ClapTrap named: " << name << " attacks " << target << ", causing " << attackDmg << " points of damage!" << std::endl;
  }
  else
      std::cout << "ClapTrap named: " << name << " has insufficient energy or hit points to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (!hitPts)
    std::cout << "ClapTrap named: " << name << "already dead!" << std::endl;
  if (hitPts > amount)
    hitPts -= amount;
  else
    hitPts = 0;
  std::cout << "ClapTrap named: " << name << " takes " << amount << " points of damage! Remaining hit points: " << hitPts << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (energyPts > 0 && hitPts > 0) {
      energyPts--;
      hitPts += amount;
      std::cout << "ClapTrap named: " << name << " is repaired by " << amount << " points! Current hit points: " << hitPts << std::endl;
  }
  else
      std::cout << "ClapTrap named: " << name << " has insufficient energy or hit points to repair" << std::endl;
}

/***************************************************************************************************************************************/

unsigned int ClapTrap::getAttackDmg() const {return attackDmg;}
unsigned int ClapTrap::getEnergyPts() const {return energyPts;}
unsigned int ClapTrap::getHitPts() const {return hitPts;}
std::string  ClapTrap::getName() const {return name;}

