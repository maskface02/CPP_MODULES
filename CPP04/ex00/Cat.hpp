/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Cat.hpp                                              :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@staudent.1337.ma>             +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/27 18:29:04 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/27 19:36:03 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal{
  public:
    Cat();
    Cat(const Cat& otherObj);
    Cat& operator=(const Cat& otherObj);
    ~Cat();
    
    std::string getType();
    void        makeSound() override;

};
