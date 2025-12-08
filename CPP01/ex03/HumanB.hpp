/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   HumanB.hpp                                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:21:16 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:21:16 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {
  private:
    std::string name;
    Weapon* weapon;

  public:
    HumanB(std::string name);
    void setWeapon(Weapon& weapon);
    void attack();
};

#endif
