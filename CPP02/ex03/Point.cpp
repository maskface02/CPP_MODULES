/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Point.cpp                                            :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@staudent.1337.ma>             +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/20 16:47:12 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/20 16:47:12 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const Fixed pX, const Fixed pY) : x(pX), y(pY) {}

Point::Point(const Point& otherObj) : x(otherObj.getX()), y(otherObj.getY()){}

Point& Point::operator=(const Point &otherObj) {
  (void)otherObj;
  return *this;
}

Point::~Point() {};

const Fixed Point::getX() const {return x;}

const Fixed Point::getY() const {return y;}
