/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   PresidentialPardonForm.cpp                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/12 18:40:41 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/12 18:40:41 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), target("default") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string t): AForm("PresidentialPardonForm", 25, 5), target(t) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& otherObj): AForm(otherObj), target(otherObj.target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& otherObj) {
  if (this != &otherObj)
    target = otherObj.target;
  return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::executeFormAction() const {std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;}
