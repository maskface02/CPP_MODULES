/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/23 21:45:43 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/23 21:45:43 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "Constructors: " << std::endl;
	FragTrap robot("Robby");
	ScavTrap guard("Guardian");
	ClapTrap basic("Basic");

	std::cout << "\nFragTrap: " << std::endl;
	std::cout << "Name: " << robot.getName() << std::endl;
	std::cout << "Hitpoints: " << robot.getHitPts() << std::endl;
	std::cout << "Energy: " << robot.getEnergyPts() << std::endl;
	std::cout << "Attack Damage: " << robot.getAttackDmg() << std::endl;

	std::cout << "\nFragTrap actions: " << std::endl;
	robot.attack("Enemy");
	robot.takeDamage(30);
	robot.beRepaired(20);
	robot.highFivesGuys();

	std::cout << "\nScavTrap Actions: " << std::endl;
	guard.attack("Intruder");
	guard.guardGate();

	std::cout << "\nClapTrap Actions:" << std::endl;
	basic.attack("Target");

	std::cout << "\nCopy Test: " << std::endl;
	FragTrap copy("Copy");
	copy = robot;
	std::cout << "Copy name: " << copy.getName() << std::endl;
	copy.highFivesGuys();

	std::cout << "\nDestructors: " << std::endl;
	return 0;
}
