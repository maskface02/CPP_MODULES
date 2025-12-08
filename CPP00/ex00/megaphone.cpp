/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   megaphone.cpp                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:20:12 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:20:12 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */


#include <cctype>
#include <iostream>

int  main (int ac, char *av[]) {
  if (ac == 1)
    return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 1);
  for (int i = 1; i < ac; i++) {
    int j = -1;
    while (av[i][++j])
      std::cout << (char)toupper(av[i][j]);
    std::cout << std::endl;
  }
  return 0;
}
