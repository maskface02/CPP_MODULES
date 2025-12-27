/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Dog.hpp                                              :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@staudent.1337.ma>             +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/27 18:50:20 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/27 19:36:10 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal{
  public:
    Dog();
    Dog(const Dog& otherObj);
    Dog& operator=(const Dog& otherObj);
    ~Dog();

    std::string getType();
    void        makeSound() override;
};
