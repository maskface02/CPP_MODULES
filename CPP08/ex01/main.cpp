/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:18:42 by zatais            #+#    #+#             */
/*   Updated: 2026/02/08 18:18:42 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <iostream>
int main() {
  try {
    Span sp = Span(6);
    // sp.addNumber(9);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(6);
    // sp.addNumber(11);
    // sp.addNumber(1);
    std::vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(55);
    v.push_back(0);
    v.push_back(-1);

    sp.addMultiNumbers(v.begin(), v.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}
