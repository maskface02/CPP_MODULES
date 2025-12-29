/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   WrongAnimal.hpp                                      :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/28 23:46:55 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/28 23:47:43 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPPP
#define WRONGANIMAL_HPPP

#include <string>
#include <iostream>

class WrongAnimal{
  protected:
    std::string type;

  public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& otherObj);
    WrongAnimal& operator=(const WrongAnimal &otherObj);
    ~WrongAnimal();
    std::string  getType() const ;
    void makeSound() const;

};

#endif
