/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   WrongCat.hpp                                         :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/28 23:50:22 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/28 23:59:31 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP


#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
  public:
    WrongCat();
    WrongCat(const WrongCat& otherObj);
    WrongCat& operator=(const WrongCat& otherObj);
    ~WrongCat();
    
    std::string getType() const;
    void        makeSound() const;

};

#endif
