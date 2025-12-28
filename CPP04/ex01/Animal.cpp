/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 15:29:30 by zatais            #+#    #+#             */
/*   Updated: 2025/12/28 15:29:30 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){std::cout << "Animal Default constructor called" << std::endl;}

Animal::Animal(const Animal& otherObj) : type(otherObj.type) {std::cout << "Animal Copy constructor called " << std::endl;}

Animal& Animal::operator=(const Animal& otherObj) {
  std::cout << "Animal Assignation operator called" << std::endl;
  if (this != &otherObj)
    type = otherObj.type;
  return *this;
}

Animal::~Animal(){std::cout << "Animal destructor called" << std::endl;}

std::string Animal::getType() const {return type;}

void Animal::makeSound() const {std::cout << "Normal animal sound !!! " << std::endl;}
