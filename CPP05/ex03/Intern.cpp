/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Intern.cpp                                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/14 15:56:16 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/14 15:56:16 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& otherObj) {(void)otherObj;}

Intern& Intern::operator=(const Intern& otherObj) {
  (void)otherObj;
  return *this;
}

Intern::~Intern() {}

AForm* Intern::makePresidentialPardonForm(std::string t) {return new PresidentialPardonForm(t);}

AForm* Intern::makeShrubberyForm(std::string t) {return new ShrubberyCreationForm(t);}

AForm* Intern::makeRobotForm(std::string t) {return new RobotomyRequestForm(t);}

AForm* Intern::makeForm(std::string formName, std::string targetForm) {
	AForm* (Intern::*formCreators[])(std::string) = {
		&Intern::makePresidentialPardonForm, 
		&Intern::makeRobotForm, 
		&Intern::makeShrubberyForm
	};
	std::string formNames[] = {
		"presidential pardon", 
		"robotomy request", 
		"shrubbery creation"
	};

	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*formCreators[i])(targetForm);
		}
	}
	std::cout << "Intern cannot create form: " << formName << std::endl;
	return NULL;
}
