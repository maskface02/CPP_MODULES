/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/22 02:12:38 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/22 02:12:38 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clap1("Clappy");
    ClapTrap clap2 = clap1;
    ClapTrap clap3;
    clap3 = clap1;

    clap1.attack("Target1");
    clap1.takeDamage(5);
    clap1.beRepaired(3);

    clap2.attack("Target2");
    clap2.takeDamage(15);
    clap2.beRepaired(10);

    clap3.attack("Target3");
    clap3.takeDamage(8);
    clap3.beRepaired(5);

    return 0;
}
