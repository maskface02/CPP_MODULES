/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 18:53:15 by zatais            #+#    #+#             */
/*   Updated: 2025/12/28 18:53:15 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){std::cout << "Brain Default constructor called" << std::endl;}

Brain::Brain(const Brain& otherObj) {
  std::cout << "Brain Copy constructor called" << std::endl;
  for (int i = 0; i < 100; i++)
    ideas[i] = otherObj.ideas[i];
}

Brain& Brain::operator=(const Brain& otherObj) {
  std::cout << "Brain Assignation operator called" << std::endl;
  if (this != &otherObj) {
    for (int i = 0; i < 100; i++)
      ideas[i] = otherObj.ideas[i];
  }
  return *this;
}

Brain::~Brain(){std::cout << "Brain Destructor called" << std::endl;}
