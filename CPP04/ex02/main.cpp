/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/29 01:25:00 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/29 01:25:00 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
  std::cout << "\n---Constructors---" << std::endl << std::endl;

  // Animal a;
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  delete j;
  delete i;

  std::cout << "\n---Creating Animals---" << std::endl << std::endl;
  
  Animal* animals[10];
  for (int idx = 0; idx < 10; idx++) {
      if (idx < 5)
          animals[idx] = new Dog();
      else
          animals[idx] = new Cat();
  }
  
  std::cout << "\n---Testing---" << std::endl << std::endl;
  
  for (int idx = 0; idx < 10; idx++)
      delete animals[idx];

  std::cout << "\n---Deep copy test ---\n" << std::endl;
  
  Dog basic;
  Dog tmp = basic;

  return 0;
}
