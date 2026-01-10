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
        Bureaucrat bob("Bob", 50);
        std::cout << bob << std::endl;
        
        bob.incrementGrade();
        std::cout << bob << std::endl;
        
        Bureaucrat invalid("Invalid", 151);
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
