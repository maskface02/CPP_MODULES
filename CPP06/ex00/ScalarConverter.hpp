/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ScalarConverter.hpp                                  :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/18 16:24:04 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/18 16:24:04 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <climits>
#include <cmath>

class ScalarConverter {
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& other);
    ScalarConverter& operator=(const ScalarConverter& other);
    ~ScalarConverter();

public:
    static void convert(std::string literal);
};

#endif
