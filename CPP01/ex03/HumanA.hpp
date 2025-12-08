/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   HumanA.hpp                                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:21:13 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:21:13 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
#define HumanA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {
private:
    std::string name;
    Weapon& weapon;
public:
    HumanA(std::string name, Weapon& weapon);
    void attack();
};

#endif
