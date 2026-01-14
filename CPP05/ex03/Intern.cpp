/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:51:10 by zatais            #+#    #+#             */
/*   Updated: 2026/01/14 11:51:10 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& otherObj) {*this = otherObj;}

Intern& Intern::operator=(const Intern& otherObj) {
  if (this != &otherObj)
    *this = otherObj;
  return *this;
}

Intern::~Intern() {}

AForm* Intern::makePresidentialPardonForm(std::string t) {return new PresidentialPardonForm(t);}

AForm* Intern::makeShrubberyForm(std::string t) {return new ShrubberyCreationForm(t);}

AForm* Intern::makeRobotForm(std::string t) {return new RobotomyRequestForm(t);}

AForm* Intern::makeForm(std::string formName, std::string targetForm) {
	AForm* (*forms[])(const std::string target) = {&makePresidentialPardonForm, &makeRobotForm, &makeShrubberyForm};
	std::string forms[] = {"presidential pardon request", "robotomy request", "shrubbery request"};

	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (forms[i](targetForm));
		}
	}
    std::cout << "Intern cannot create form: " << formName << std::endl;
    return NULL;
}

