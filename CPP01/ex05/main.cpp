/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/12 17:00:35 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/12 17:00:35 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
    Harl harl;
    
    std::cout << "----Harl's Complaint System----" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Testing DEBUG level:" << std::endl;
    harl.complain("DEBUG");
    
    std::cout << "Testing INFO level:" << std::endl;
    harl.complain("INFO");
    
    std::cout << "Testing WARNING level:" << std::endl;
    harl.complain("WARNING");
    
    std::cout << "Testing ERROR level:" << std::endl;
    harl.complain("ERROR");
    
    std::cout << "Testing invalid level:" << std::endl;
    harl.complain("CRITICAL");
    
    std::cout << "Testing another invalid level:" << std::endl;
    harl.complain("debug");
    
    std::cout << "Multiple complaints" << std::endl;
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("DEBUG");
    
    return 0;
}
