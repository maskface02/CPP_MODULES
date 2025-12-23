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
  std::cout << "FragTrap named: " << name << " constructed with default values" << std::endl;
}

FragTrap::FragTrap(const FragTrap& otherObj) : ClapTrap(otherObj.name) {
  hitPts = otherObj.hitPts;
  energyPts = otherObj.energyPts;
  attackDmg = otherObj.attackDmg;
  std::cout << "FragTrap named: " << name << " copied" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& otherObj) {
  std::cout << "FragTrap Assignation operator called" << std::endl;
  if (this != &otherObj) {
    name = otherObj.name;
    hitPts = otherObj.hitPts;
    energyPts = otherObj.energyPts;
    attackDmg = otherObj.attackDmg;
  }
  std::cout << "FragTrap named: " << name << " assigned" << std::endl;
  return *this;
}

FragTrap::~FragTrap() {std::cout << "FragTrap named: " << name << " deleted" << std::endl;}

/***********************************************************************************************/

void FragTrap::highFivesGuys() {
  if (hitPts > 0)
    std::cout << "FragTrap named: " << name << " requests high-fives!" << std::endl;
  else
    std::cout << "FragTrap named: " << name << " has been destroyed!" << std::endl;
}
