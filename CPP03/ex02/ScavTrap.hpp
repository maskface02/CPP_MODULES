/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ScavTrap.hpp                                         :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/22 02:13:40 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/22 15:56:31 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {
  public:
    ScavTrap();
    ScavTrap(const std::string& n);
    ScavTrap(const ScavTrap& otherObj);
    ScavTrap& operator=(const ScavTrap& otherObj);
    ~ScavTrap();

    void guardGate();
    void attack(const std::string& target);
};

#endif
