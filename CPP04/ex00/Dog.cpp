/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Dog.cpp                                              :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@staudent.1337.ma>             +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/27 18:50:35 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/27 18:50:35 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
  type = "Dog";
  std::cout << type <<" Default constructor Called" << std:::endl;
}

Dog::Dog(const Dog& otherObj){
  type = otherObj.type;
  std::cout << type < " Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& otherObj){
  if (this != &otherObj)
    type = otherObj.type;
  return *this;
}

Dog::~Dog(){std::cout << type << " desctructor called" << std::endl;}

void Dog::makeSound(){std::cout << "Bark Bark ng!!" << std::endl;}

std::string Dog::getType(){return type;}
