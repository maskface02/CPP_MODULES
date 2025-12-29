/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Animal.hpp                                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@staudent.1337.ma>             +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/27 18:15:22 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/27 18:15:22 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPPP
#define ANIMAL_HPPP

#include <string>
#include <iostream>
class Animal {
  protected:
    std::string type;

  public:
    Animal();
    Animal(const Animal& otherObj);
    Animal& operator=(const Animal &otherObj);
    virtual ~Animal();
    std::string  getType() const ;
    virtual void makeSound() const = 0;
};

#endif
