/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Fixed.hpp                                            :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/17 22:01:01 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/17 22:39:15 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>

class Fixed{
  private:
    int fixedPointVal;
    static const int fractionBits = 8;

  public:
    Fixed();
    Fixed(const Fixed &obj);
    Fixed& operator=(const Fixed &obj);
    ~Fixed();

    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif
