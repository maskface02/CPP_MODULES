/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Base.cpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/23 22:35:35 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/23 22:35:35 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

/******************************************************************************/

Base* generate(void) {
    int random = rand() % 3;
    switch (random) {
        case 0:
            std::cout << "Generated: A" << std::endl;
            return new A();
        case 1:
            std::cout << "Generated: B" << std::endl;
            return new B();
        default:
            std::cout << "Generated: C" << std::endl;
            return new C();
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
      std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
      std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
      std::cout << "C" << std::endl;
    else
      std::cout << "Unknown type" << std::endl;
}

void identify(Base& p) {
  A a;
	B b;
	C c;

  try {
    a = dynamic_cast<A&>(p);
    std::cout << "A" << std::endl;
    return;
  }
  catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  
  try {
    b = dynamic_cast<B&>(p);
    std::cout << "B" << std::endl;
    return;
  }
  catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  try {
    c = dynamic_cast<C&>(p);
    std::cout << "C" << std::endl;
    return;
  }
  catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << "Unknown type" << std::endl;
}
