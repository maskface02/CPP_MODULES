/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Animal.cpp                                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@staudent.1337.ma>             +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/27 18:19:47 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/27 18:19:47 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){std::cout << "Animal Default constructor called" << std::endl;}

Animal::Animal(const Animal& otherObj) : type(otherObj.type) {std::cout << "Animal Copy constructor called " << std::endl;}

Animal& Animal::operator=(const Animal& otherObj) {
  if (this != &otherObj)
    type = otherObj.type;
  return *this;
}

Animal::~Animal(){std::cout << "Animal destructor called" << std::endl;}

void Animal::makeSound(){std::cout << "Normal animal sound !!! " << std::endl;}
