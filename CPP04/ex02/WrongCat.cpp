/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   WrongCat.cpp                                         :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/28 23:51:59 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/29 00:04:59 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
  type = "WrongCat";
  std::cout << type <<" Default Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& otherObj) : WrongAnimal() {
  type = otherObj.type;
  std::cout << type << " Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& otherObj){
  std::cout << "WrongCat Assignation operator called" << std::endl;
  if (this != &otherObj)
    type = otherObj.type;
  return *this;
}

WrongCat::~WrongCat(){std::cout << type << " Desctructor called" << std::endl;}

void WrongCat::makeSound() const {std::cout << "Meow Meow ng!!" << std::endl;}

std::string WrongCat::getType() const {return type;}
