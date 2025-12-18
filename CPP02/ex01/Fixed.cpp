/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Fixed.cpp                                            :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/17 23:14:51 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/17 23:14:51 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointVal(0) {std::cout << "Default constructor called" << std::endl;}

Fixed::Fixed(const Fixed& obj){
  std::cout << "Copy constructor called" << std::endl;
  *this = obj; //need confermation
}

Fixed::Fixed(const int intValue) {
  std::cout << "Int constructor called" << std::endl;
  fixedPointVal = intValue << fractionBits;
}

Fixed::Fixed(const float floatValue) {
  std::cout << "Float constructor called" << std::endl;
  fixedPointVal = roundf(floatValue * (1 << fractionBits));
}

Fixed& Fixed::operator=(const Fixed& obj){
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &obj)
    fixedPointVal = obj.getRawBits();
  return *this;
}

Fixed::~Fixed(){std::cout << "Destructor called" << std::endl;}

float Fixed::toFloat() const {
  return (float)fixedPointVal / (1 << fractionBits);
}

int Fixed::toInt() const {
  return fixedPointVal >> fractionBits;
}

int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return fixedPointVal;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
  fixedPointVal = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
  out << fixed.toFloat();
  return out;
}
