/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 14:59:32 by zatais            #+#    #+#             */
/*   Updated: 2026/03/21 14:59:32 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(std::string argv) {
  std::stringstream input(argv);
	std::string token;
	int num;

	while (std::getline(input, token, ' '))
	{
		if ((token.length() == 1 && isdigit(token[0])) || (token.length() == 2 && token[0] == '-' && isdigit(token[1])))
		{
			std::stringstream(token) >> num;
			stack.push(num);
		}
    else if (token == "+")
      operate(&RPN::add);
    else if (token == "-")
      operate(&RPN::ext);
    else if (token == "*")
      operate(&RPN::mul);
    else if (token == "/")
      operate(&RPN::div);
		else
			throw std::runtime_error("Error : Invalid argument: '" + token + "'");
	}
}

RPN::RPN(const RPN &other) {static_cast<void>(other);}

RPN &RPN::operator=(const RPN &other) {static_cast<void>(other);return *this;}

RPN::~RPN() {}

/********************************************************************************************************************/

void RPN::operate(double (RPN::*f)(double a, double b)) {
 if (stack.size() < 2)
   throw std::runtime_error("Error : Invalid input!!");

 double x = stack.top();
 stack.pop();
 double y = stack.top();
 stack.pop();
 double z = (this->*f)(x, y);
 stack.push(z);
}

double RPN::add(double a, double b) {return a + b;}

double RPN::mul(double a, double b) {return a * b;}

double RPN::div(double a, double b) {
  if (!b)
    throw std::domain_error("Error : Division by zero!!");
  return a / b;
}

double RPN::ext(double a, double b) {return a - b;}

double RPN::getResult() {
  if (stack.size() > 1)
    throw std::runtime_error("Error : Invalid input\nHint : Missed operand or Extra number in input field!!");
  return stack.top();
}
