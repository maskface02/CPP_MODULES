/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:21:05 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:21:05 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main () {
  Zombie *z = zombieHorde(4, "test");
  z[0].setName("z1");
  z[1].setName("z2");
  z[2].setName("z3");
  z[3].setName("z3");
  for(int i = 0; i < 4; i++)
    z[i].announce();
  delete [] z;
  return 0;
}
