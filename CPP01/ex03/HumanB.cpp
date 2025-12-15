/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   HumanB.cpp                                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@staudent.1337.ma>             +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/15 11:48:43 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/15 11:48:43 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) , weapon(NULL) {}

void HumanB::setWeapon(Weapon& sWeapon) {weapon = &sWeapon;}

void HumanB::attack(){
  if (weapon)
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
  else
    std::cout << name << " has no weapon to attack with!" << std::endl;
}
