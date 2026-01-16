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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{

	ShrubberyCreationForm shrubbery("Home");
	RobotomyRequestForm robotomy("test");
	Bureaucrat tester1("tester1", 150);
	Bureaucrat tester2("tester2", 120);
	Bureaucrat tester3("tester3", 3);
	
	{
		try
		{
			std::cout << tester1 << std::endl;
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			tester1.executeForm(shrubbery);
			tester1.executeForm(robotomy);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "--------------------- \n";
	
	{
		try
		{
			std::cout << tester1 << std::endl;
			std::cout << tester2 << std::endl;
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			shrubbery.beSigned(tester2);
			tester1.executeForm(shrubbery);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "---------------------\n";
	
	{
		try
		{
			robotomy.beSigned(tester3);
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			
			std::cout << "--------------------- \n";
			tester3.executeForm(shrubbery);
			std::cout << "--------------------- \n";
			tester3.executeForm(robotomy);
			std::cout << "--------------------- \n";
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
