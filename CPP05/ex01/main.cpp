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
#include "Form.hpp"

int main(void)
{
	{
		try
		{
			Form form0("rb26", 0, 5);
			std::cout << form0 << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";

	{
		try
		{
			Bureaucrat test("test", 11);
			Form form("b55", 20, 45);
			std::cout << test << std::endl;
			std::cout << form << std::endl;
			test.signForm(form);
			std::cout << form << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << "\n --------------------- \n\n";

	{
		try
		{
			Bureaucrat test("test", 77);
			Form form("2jz", 20, 77);
			std::cout << test << std::endl;
			std::cout << form << std::endl;
			test.signForm(form);
			std::cout << form << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
