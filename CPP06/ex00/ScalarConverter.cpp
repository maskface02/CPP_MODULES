/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ScalarConverter.cpp                                  :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/18 16:29:03 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/18 16:29:03 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void)other; }

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) { (void)other; return *this; }

ScalarConverter::~ScalarConverter() {}

/**********************************************************************************************************************/

static bool isChar(std::string literal) {return (literal.length() == 1 && isprint(literal[0]) && isalpha(literal[0]));}

static void convertFromChar(char c) {
  std::cout << "char: '" << c << "'" << std::endl;
  std::cout << "int: " << static_cast<int>(c) << std::endl;
  std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
  std::cout << "double: " << static_cast<double>(c) << std::endl;
}

static bool isInt(std::string literal) {
  size_t i = 0;
  if (literal[0] == '+' || literal[0] == '-')
    i++;
  if (i >= literal.length())
    return false;
  while(i < literal.length()) {
      if (!isdigit(literal[i]))
        return false;
      i++;
  }
  return true;
}

static void convertFromInt(int value) {
  if (value < 0 || value > 127)
    std::cout << "char: impossible" << std::endl;
  else if (value < 32 || value == 127)
    std::cout << "char: Non displayable" << std::endl;
  else
    std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
  std::cout << "int: " << value << std::endl;
  std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
  std::cout << "double: " << static_cast<double>(value) << std::endl;
}

static bool isFloat(const std::string& literal) {
  if (literal[literal.length() - 1] != 'f')
      return false;
  if (literal == "nanf" || literal == "+inff" || literal == "-inff" || literal == "inff")
    return true;

  std::string numPart = literal.substr(0, literal.length() - 1);
  size_t i = 0;
  bool hasDot = false;

  if (numPart[0] == '+' || numPart[0] == '-')
    i++;
  while (i < numPart.length()) {
    if (numPart[i] == '.') {
      if (hasDot)
        return false;
      hasDot = true;
    }
    else if (!isdigit(numPart[i]))
      return false;
    i++;
  }
  return hasDot;
}

static void convertFromFloat(float value) {
  if (isnan(value) || isinf(value))
    std::cout << "char: impossible" << std::endl;
  else if (value < 0 || value > 127)
    std::cout << "char: impossible" << std::endl;
  else if (static_cast<int>(value) < 32 || static_cast<int>(value) == 127)
    std::cout << "char: Non displayable" << std::endl;
  else
    std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
  
  if (isnan(value) || isinf(value))
    std::cout << "int: impossible" << std::endl;
  else if (value < INT_MIN || value > INT_MAX)
    std::cout << "int: impossible" << std::endl;
  else
    std::cout << "int: " << static_cast<int>(value) << std::endl;

  if (isnan(value))
    std::cout << "float: nanf" << std::endl;
  else if (isinf(value)) {
    if (value > 0)
      std::cout << "float: +inff" << std::endl;
    else
      std::cout << "float: -inff" << std::endl;
  }
  else
    std::cout << "float: " << value << "f" << std::endl;

  if (isnan(value))
      std::cout << "double: nan" << std::endl;
  else if (isinf(value)) {
    if (value > 0)
      std::cout << "double: +inf" << std::endl;
    else
      std::cout << "double: -inf" << std::endl;
  }
  else
    std::cout << "double: " << static_cast<double>(value) << std::endl;
}

static bool isDouble(const std::string& literal) {
  if (literal == "nan" || literal == "+inf" || literal == "-inf" || literal == "inf")
    return true;
  
  size_t i = 0;
  bool hasDot = false;

  if (literal[0] == '+' || literal[0] == '-')
    i++;
  while (i < literal.length()) {
    if (literal[i] == '.') {
      if (hasDot)
        return false;
      hasDot = true;
    }
    else if (!isdigit(literal[i]))
      return false;
    i++;
  }
  return hasDot;
}

static void convertFromDouble(double value) {
  if (isnan(value) ||isinf(value))
    std::cout << "char: impossible" << std::endl;
  else if (value < 0 || value > 127)
    std::cout << "char: impossible" << std::endl;
  else if (static_cast<int>(value) < 32 || static_cast<int>(value) == 127)
    std::cout << "char: Non displayable" << std::endl;
  else
    std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;

  if (isnan(value) || isinf(value))
    std::cout << "int: impossible" << std::endl;
  else if (value < INT_MIN || value > INT_MAX)
    std::cout << "int: impossible" << std::endl;
  else
    std::cout << "int: " << static_cast<int>(value) << std::endl;
  
  if (isnan(value))
    std::cout << "float: nanf" << std::endl;
  else if (isinf(value)) {
    if (value > 0)
        std::cout << "float: +inff" << std::endl;
    else
        std::cout << "float: -inff" << std::endl;
  }
  else
      std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
  
  if (isnan(value))
    std::cout << "double: nan" << std::endl;
  else if (isinf(value)) {
    if (value > 0)
      std::cout << "double: +inf" << std::endl;
    else
      std::cout << "double: -inf" << std::endl;
  }
  else
    std::cout << "double: " << value << std::endl;
}

/**********************************************************************************************************************/

void ScalarConverter::convert(std::string literal) {
  if (literal.empty()) {
    std::cout << "Empty..." << std::endl;
    return;
  }
  
  if (isChar(literal)) {
    convertFromChar(literal[0]);
    return;
  }
  
  if (isInt(literal)) {
    long temp = atol(literal.c_str());
    if (temp < INT_MIN|| temp > INT_MAX) {
      std::cout << "type conversion is impossible" << std::endl;
      return;
    }
    int value = static_cast<int>(temp);
    convertFromInt(value);
    return;
  }
  
  if (isFloat(literal)) {
    float value;
    if (literal == "nanf")
      value = NAN; 
    else if (literal == "+inff" || literal == "inff")
      value = INFINITY; 
    else if (literal == "-inff")
      value = -INFINITY;
    else
      value = atof(literal.c_str());
    convertFromFloat(value);
    return;
  }
  
  if (isDouble(literal)) {
    double value;
    if (literal == "nan")
        value = NAN;
    else if (literal == "+inf" || literal == "inf")
        value = INFINITY;
    else if (literal == "-inf")
        value = -INFINITY;
    else
        value = atof(literal.c_str());
          
    convertFromDouble(value);
    return;
  }

  std::cout << "Error: invalid literal format" << std::endl;
}
