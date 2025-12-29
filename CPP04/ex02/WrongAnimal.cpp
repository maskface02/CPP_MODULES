/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   WrongWrongAnimal.hpp                                      :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/28 23:44:48 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/28 23:44:48 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){std::cout << "WrongAnimal Default constructor called" << std::endl;}

WrongAnimal::WrongAnimal(const WrongAnimal& otherObj) : type(otherObj.type) {std::cout << "WrongAnimal Copy constructor called " << std::endl;}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& otherObj) {
  std::cout << "WrongAnimal Assignation operator called" << std::endl;
  if (this != &otherObj)
    type = otherObj.type;
  return *this;
}

WrongAnimal::~WrongAnimal(){std::cout << "WrongAnimal destructor called" << std::endl;}

std::string WrongAnimal::getType() const {return type;}
void WrongAnimal::makeSound() const {std::cout << "Normal wronganimal sound !!! " << std::endl;}
