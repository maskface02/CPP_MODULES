/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/23 22:33:20 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/23 22:33:20 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>



int main() {
    srand(std::time(0));
    
    std::cout << "=== Testing generate() and identify() ===" << std::endl;
    std::cout << std::endl;
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Test " << i + 1 << ":" << std::endl;
        Base* ptr = generate();
        
        std::cout << "Identify by pointer: "<< std::endl;
        identify(ptr);
        
        std::cout << "Identify by reference: "<< std::endl;
        identify(*ptr);
        
        delete ptr;
        std::cout << std::endl;
    }
    
    std::cout << "=== Testing with known types ===" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Creating A:" << std::endl;
    Base* a = new A();
    std::cout << "Pointer identification: "<< std::endl;
    identify(a);
    std::cout << "Reference identification: "<< std::endl;
    identify(*a);
    delete a;
    std::cout << std::endl;
    
    std::cout << "Creating B:" << std::endl;
    Base* b = new B();
    std::cout << "Pointer identification: "<< std::endl;
    identify(b);
    std::cout << "Reference identification: "<< std::endl;
    identify(*b);
    delete b;
    std::cout << std::endl;
    
    std::cout << "Creating C:" << std::endl;
    Base* c = new C();
    std::cout << "Pointer identification: "<< std::endl;
    identify(c);
    std::cout << "Reference identification: "<< std::endl;
    identify(*c);
    delete c;
    
    return 0;
}
