/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/08 19:47:44 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/10 17:49:17 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	/* Create the 3 forms and some Bureaucrats */

	ShrubberyCreationForm shrubbery("Home");
	RobotomyRequestForm robotomy("Morty");
	Bureaucrat mike("Mike", 150);
	Bureaucrat jon("Jon", 120);
	Bureaucrat steve("Steve", 3);
	
	/* Try to execute forms without being signed */
	{
		try
		{
			std::cout << mike << std::endl;
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			mike.executeForm(shrubbery);
			mike.executeForm(robotomy);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";
	
	/* Sign form and try to execute without enough grade */
	{
		try
		{
			std::cout << mike << std::endl;
			std::cout << jon << std::endl;
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			shrubbery.beSigned(jon);
			mike.executeForm(shrubbery);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";
	
	/* Sign forms and execute them */
	{
		try
		{
			robotomy.beSigned(steve);
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			
			std::cout << "\n --------------------- \n\n";
			steve.executeForm(shrubbery);
			std::cout << "\n --------------------- \n\n";
			steve.executeForm(robotomy);
			std::cout << "\n --------------------- \n\n";
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << "\n --------------------- \n\n";


	return (0);
}
