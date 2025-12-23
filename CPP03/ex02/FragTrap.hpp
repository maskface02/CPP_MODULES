/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   FragTrap.hpp                                         :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@staudent.1337.ma>             +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/23 14:04:44 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/23 14:04:44 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class FragTrap : public ClapTrap {
  public:
    FragTrap();
    FragTrap(const std::string &n);
    FragTrap(const FragTrap &otherObj);
    FragTrap& operator=(const FragTrap& otherObj);

    void highFivesGuys(void);
};

#endif

