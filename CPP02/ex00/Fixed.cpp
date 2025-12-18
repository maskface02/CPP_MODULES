/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Fixed.cpp                                            :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/17 22:00:57 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/17 22:00:57 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointVal(0) {std::cout << "Default constructor called" << std::endl;}

Fixed::Fixed(const Fixed& obj){
  std::cout << "Copy constructor called" << std::endl;
  *this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj){
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &obj)
    fixedPointVal = obj.getRawBits();
  return *this;
}

Fixed::~Fixed(){std::cout << "Destructor called" << std::endl;}

int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return fixedPointVal;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
  fixedPointVal = raw;
}
