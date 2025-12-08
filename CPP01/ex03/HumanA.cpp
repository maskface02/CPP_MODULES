/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   HumanA.cpp                                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:21:12 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:21:12 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}

void HumanA::attack(){
  std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
