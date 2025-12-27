/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Cat.cpp                                              :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@staudent.1337.ma>             +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/27 18:34:00 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/27 18:34:00 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
  type = "Cat";
  std::cout << type <<" Default Constructor Called" << std:::endl;
}

Cat::Cat(const Cat& otherObj) {
  type = otherObj.type;
  std::cout << type < " Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& otherObj){
  if (this != &otherObj)
    type = otherObj.type;
  return *this;
}

Cat::~Cat(){std::cout << type << " Desctructor called" << std::endl;}

void Cat::makeSound(){std::cout << "Meow Meow ng!!" << std::endl;}

std::string Cat::getType(){return type;}
