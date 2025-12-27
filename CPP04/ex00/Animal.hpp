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

#include <string>

class Animal{
  protected:
    std::string type;

  public:
    Animal();
    Animal(const Animal& otherObj);
    Animal& operator=(const Animal &otherObj);
    ~Animal();

    virtual void makeSound();
};
