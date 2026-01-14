/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   RobotomyRequestForm.cpp                              :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/12 19:58:18 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/12 19:58:18 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), target("default") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string t): AForm("RobotomyRequestForm", 72, 45), target(t) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& otherObj): AForm(otherObj), target(otherObj.target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& otherObj) {
  if (this != &otherObj)
  {
    AForm::operator=(otherObj);
    target = otherObj.target;
  }
  return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::executeFormAction() const
{
  std::cout << " ...DRILLING NOISES..." << std::endl;
  
	int	success;

	srand(time(NULL));
	success = rand() % 2;
	if (success)
		std::cout << target << " has been robotomized successfully" << std::endl;
	else
		std::cout << target << "'s robotomization failed" << std::endl;}
