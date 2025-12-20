/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Point.hpp                                            :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@staudent.1337.ma>             +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/20 14:35:40 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/20 15:30:15 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
  private:
    const Fixed x;
    const Fixed y;
  public:
    Point();
    Point(const Fixed  pX, Fixed const pY);
    Point(const Point  &otherObj);
    Point& operator=(const Point &otherObj);
    ~Point();

    const Fixed getX() const;
    const Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif 
