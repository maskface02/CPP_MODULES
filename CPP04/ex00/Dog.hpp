/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 17:44:12 by zatais            #+#    #+#             */
/*   Updated: 2025/12/28 17:44:12 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"


class Dog : public Animal{
  public:
    Dog();
    Dog(const Dog& otherObj);
    Dog& operator=(const Dog& otherObj);
    ~Dog();

    std::string getType() const;
    void        makeSound() const;
};

#endif // DEBUG
