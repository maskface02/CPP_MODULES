/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Fixed.hpp                                            :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/17 22:48:31 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/18 13:14:29 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
  private:
    int fixedPointVal;
    static const int fractionBits = 8;

  public:
    Fixed();
    Fixed(const int val);
    Fixed(const float val);
    Fixed(const Fixed &obj);

    Fixed& operator=(const Fixed &obj);

    Fixed  operator*(const Fixed &obj);
    Fixed  operator+(const Fixed &obj);
    Fixed  operator-(const Fixed &obj);
    Fixed  operator/(const Fixed &obj);

    bool   operator>(const Fixed &obj) const;
    bool   operator<(const Fixed &obj) const;
    bool   operator>=(const Fixed &obj) const;
    bool   operator<=(const Fixed &obj) const;
    bool   operator==(const Fixed &obj) const;
    bool   operator!=(const Fixed &obj) const;

    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

    static Fixed&       min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed&       max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
    
    ~Fixed();

    int toInt( void ) const;
    float toFloat( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

std::ostream&	operator<<(std::ostream &out, Fixed const &obj);

#endif
