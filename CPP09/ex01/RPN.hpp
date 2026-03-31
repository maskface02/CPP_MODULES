/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 00:01:10 by zatais            #+#    #+#             */
/*   Updated: 2026/03/22 00:56:17 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <string>

class RPN {
private:
  std::stack<int> stack;
  double          add(double a, double b);
  double          ext(double a, double b);
  double          mul(double a, double b);
  double          div(double a, double b);
  void            operate(double (RPN::*f)(double a, double b));

public:
  RPN();
  ~RPN();
  RPN(const RPN &other);
  RPN(std::string argv);
  RPN             &operator=(const RPN &other);

  double          getResult();
};

#endif // !RPN_HPP
