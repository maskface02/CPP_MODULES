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
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
  private:
    Brain *brain;
  public:
    Cat();
    Cat(const Cat& otherObj);
    Cat& operator=(const Cat& otherObj);
    virtual ~Cat();
    
    std::string getType() const;
    void        makeSound() const;

};

#endif 
