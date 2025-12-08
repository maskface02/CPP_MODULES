/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:21:09 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:21:09 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main () {
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << "The memory address of the string variable: " << &str << std::endl;
  std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
  std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

  std::cout << "\nThe value of the string variable: " << str << std::endl;
  std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
  std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
  return 0;
}
