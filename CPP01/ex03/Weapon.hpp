/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Weapon.hpp                                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:21:18 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:21:18 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */




#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
private:
    std::string type;

public:
    Weapon(std::string weaponType);
    const std::string& getType();
    void setType(std::string newType);
};

#endif
