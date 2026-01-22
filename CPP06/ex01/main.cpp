/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:46:10 by zatais            #+#    #+#             */
/*   Updated: 2026/01/22 09:46:10 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Serializer.hpp"
#include <iostream>


int main () {
  Data* ptr = new Data;

  ptr->a = 'a';
  ptr->b = 97;
  ptr->c = 97.0f;
  ptr->d = 97.0;

  std::cout << "***before***" << std::endl;
  std::cout << ptr->a << std::endl;
  std::cout << ptr->b << std::endl;
  std::cout << ptr->c << std::endl;
  std::cout << ptr->d << std::endl;

  uintptr_t t1 = Serializer::serialize(ptr);
  Data* t2 = Serializer::deserialize(t1);
  
  std::cout << "***after***" << std::endl;

  std::cout << "\nt2" << std::endl;
  std::cout << t2->a << std::endl;
  std::cout << t2->b << std::endl;
  std::cout << t2->c << std::endl;
  std::cout << t2->d << std::endl;
 
  std::cout << "\nptr" << std::endl;
  std::cout << ptr->a << std::endl;
  std::cout << ptr->b << std::endl;
  std::cout << ptr->c << std::endl;
  std::cout << ptr->d << std::endl;

  std::cout << "\n***Compare***" << std::endl;
  std::cout << "ptr: " << ptr <<std::endl;
  std::cout << "t2: " << t2 <<std::endl;
  std::cout << "t1 to hex: 0x"<< std::hex << t1 << std::endl;

}
