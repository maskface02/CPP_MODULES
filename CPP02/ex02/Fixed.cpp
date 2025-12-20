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

Fixed::Fixed() : fixedPointVal(0) {}

Fixed::Fixed(const Fixed& obj){
  fixedPointVal = obj.fixedPointVal;
}

Fixed::Fixed(const int intValue) {
  fixedPointVal = intValue << fractionBits;
}

Fixed::Fixed(const float floatValue) {
  fixedPointVal = roundf(floatValue * (1 << fractionBits));
}

Fixed::~Fixed(){}

/*------------------------------------------------------------------------------------*/

float Fixed::toFloat() const {return (float)fixedPointVal / (1 << fractionBits);}

int Fixed::toInt() const {return fixedPointVal >> fractionBits;}

int Fixed::getRawBits() const {return fixedPointVal;}

void Fixed::setRawBits(int const raw) {fixedPointVal = raw;}

/*------------------------------------------------------------------------------------*/

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
  out << fixed.toFloat();
  return out;
}

/*-------------------------------------------------------------------------------*/

Fixed& Fixed::operator=(const Fixed& obj){
  if (this != &obj)
    fixedPointVal = obj.getRawBits();
  return *this;
}

Fixed Fixed::operator*(const Fixed &obj){
  Fixed res;

  res.setRawBits(fixedPointVal * obj.getRawBits() >> fractionBits);
  return res;
}

Fixed Fixed::operator+(const Fixed &obj){
  Fixed res;

  res.setRawBits(fixedPointVal + obj.getRawBits());
  return res;
}

Fixed Fixed::operator-(const Fixed &obj){
  Fixed res;

  res.setRawBits(fixedPointVal - obj.getRawBits());
  return res;
}

Fixed Fixed::operator/(const Fixed &obj){
  Fixed res;

  res.setRawBits(fixedPointVal / obj.getRawBits() << fractionBits);
  return res;
}

/*--------------------------------------------------------------------------------*/

bool Fixed::operator>(const Fixed &obj) const {return fixedPointVal > obj.getRawBits();}

bool Fixed::operator<(const Fixed &obj) const {return fixedPointVal < obj.getRawBits();}

bool Fixed::operator>=(const Fixed &obj) const {return fixedPointVal >= obj.getRawBits();}

bool Fixed::operator<=(const Fixed &obj) const {return fixedPointVal <= obj.getRawBits();}

bool Fixed::operator==(const Fixed &obj) const {return fixedPointVal == obj.getRawBits();}

bool Fixed::operator!=(const Fixed &obj) const {return fixedPointVal != obj.getRawBits();}

/*------------------------------------------------------------------------------------*/

Fixed& Fixed::operator++(){
  ++fixedPointVal;
  return *this;
}

Fixed Fixed::operator++(int){
  Fixed tmp = *this;

  ++fixedPointVal;
  return tmp;
}

Fixed& Fixed::operator--(){
  --fixedPointVal;
  return *this;
}

Fixed Fixed::operator--(int){
  Fixed tmp = *this;

  --fixedPointVal;
  return tmp;
}

/*-----------------------------------------------------------------------------------*/

Fixed& Fixed::min(Fixed& a, Fixed& b) {return (a < b) ? a : b;}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {return (a < b) ? a : b;}

Fixed& Fixed::max(Fixed& a, Fixed& b) {return (a > b) ? a : b;}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {return (a > b) ? a : b;}
