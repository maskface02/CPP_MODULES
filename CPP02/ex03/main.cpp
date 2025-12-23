/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@staudent.1337.ma>             +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/20 16:24:41 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/20 16:24:41 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"
int main()
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point inside(2, 2);
    Point outside(10, 10);
    Point vertex(5, 0);
    Point edge(10, 0);

    std::cout << "Inside  : " << bsp(a, b, c, inside) << std::endl;
    std::cout << "Outside : " << bsp(a, b, c, outside) << std::endl;
    std::cout << "On vertex : " << bsp(a, b, c, vertex) << std::endl;
    std::cout << "On edge : " << bsp(a, b, c, edge) << std::endl;

    return 0;
}

