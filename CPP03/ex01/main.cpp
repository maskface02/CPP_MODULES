/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@staudent.1337.ma>             +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/22 16:10:13 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/22 16:10:13 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	temp("Daniel");
	ScavTrap	Daniel("No name");

	Daniel = temp;

	std::cout << "\nScavTrap Daniel: " << std::endl;
	std::cout << "Hitpoints: " << Daniel.getHitPts() << " ";
	std::cout << "Energy: " << Daniel.getEnergyPts() << " ";
	std::cout << "Attack Damage: " << Daniel.getAttackDmg() << " ";
	std::cout << "Status: Active" << std::endl;

	std::cout << "\nStart attacking...\n" << std::endl;

	Daniel.attack("Sharks");
	Daniel.attack("Pirates");
	Daniel.takeDamage(3);
	Daniel.takeDamage(14);
	Daniel.beRepaired(10);
	Daniel.attack("Dragon");
	Daniel.attack("Spirits");
	Daniel.attack("Lions");
	Daniel.attack("Kings");

	std::cout << "\nIts Guarding time...\n" << std::endl;
	Daniel.guardGate();
	std::cout << "\nDestructors: \n" << std::endl;
}
