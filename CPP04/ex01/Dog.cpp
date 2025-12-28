/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 15:29:00 by zatais            #+#    #+#             */
/*   Updated: 2025/12/28 15:29:14 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() {
  type = "Dog";
  std::cout << type <<" Default constructor Called" << std::endl;
}

Dog::Dog(const Dog& otherObj) : Animal() {
  type = otherObj.type;
  std::cout << type << " Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& otherObj){
  std::cout << "Dog Assignation operator called" << std::endl;
  if (this != &otherObj)
    type = otherObj.type;
  return *this;
}

Dog::~Dog(){std::cout << type << " desctructor called" << std::endl;}

void Dog::makeSound() const {std::cout << "Bark Bark ng!!" << std::endl;}

std::string Dog::getType() const {return type;}
