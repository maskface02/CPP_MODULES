/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/08 19:47:44 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/08 19:47:44 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat test("test", 50);
        std::cout << test << std::endl;
        
        test.incrementGrade();
        std::cout << test << std::endl;
        
        Bureaucrat invalid("invalid", 151);
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << "----------------------------------"<< std::endl;
    try {
      Bureaucrat test("test", 50);
      std::cout << test << std::endl;
      
      test.incrementGrade();
      std::cout << test << std::endl;
      
      Bureaucrat invalid("invalid", 0);
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    } 
}
