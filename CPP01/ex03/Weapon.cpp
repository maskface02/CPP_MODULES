/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Weapon.cpp                                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:21:17 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:21:17 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string weaponType) : type(weaponType) {}

const std::string& Weapon::getType() {return type;}

void Weapon::setType(std::string newType) {type = newType;}
