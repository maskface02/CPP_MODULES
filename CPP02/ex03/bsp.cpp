/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   bsp.cpp                                              :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@staudent.1337.ma>             +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/20 16:47:08 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/20 16:47:08 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed triangleAreaCalc(Point const p1, Point const p2, Point const p3){
  Fixed area = p1.getX() * (p2.getY() - p3.getY()) + 
    p2.getX() * (p3.getY() - p1.getY()) +
    p3.getX() * (p1.getY() - p2.getY());
  if (area < Fixed(0))
    area = area * Fixed(-1);
  return area / Fixed(2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point){

  Fixed areaSum = 0;
  Fixed triangleArea = triangleAreaCalc(a, b, c);

  Fixed tr1 = triangleAreaCalc(a, b, point);
  Fixed tr2 = triangleAreaCalc(a, c, point);
  Fixed tr3 = triangleAreaCalc(b, c, point);

  if (tr1 == Fixed(0) || tr2 == Fixed(0) || tr3 == Fixed(0))
    return false;
  
  areaSum = tr1 + tr2 + tr3;
  if (triangleArea == areaSum)
    return true;
  return false;
}
