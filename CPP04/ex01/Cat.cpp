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
  brain = new Brain();
  type = "Cat";
  std::cout << type <<" Default Constructor Called" << std::endl;
}

Cat::Cat(const Cat& otherObj) : Animal() {
  type = otherObj.type;
  std::cout << type << " Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& otherObj){
  std::cout << "Cat Assignation operator called" << std::endl;
  if (this != &otherObj)
    type = otherObj.type;
  return *this;
}

Cat::~Cat(){ 
  std::cout << type << " Cat Desctructor called" << std::endl;
  delete brain;
}

void Cat::makeSound() const {std::cout << "Meow Meow ng!!" << std::endl;}

std::string Cat::getType() const {return type;}
