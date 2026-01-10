/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Bureaucrat.hpp                                       :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/06 18:03:06 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/08 by zatais                      #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Form;
class Bureaucrat {
  private:
    const std::string name;
    int grade;
  
  public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& otherObj);
    Bureaucrat(const std::string n, int g);
    Bureaucrat&  operator=(const Bureaucrat& otherObj);

    void         incrementGrade();
    void         decrementGrade();
    void         signForm(Form &form);

    std::string  getName() const;
    int          getGrade() const;

    class GradeTooHighException : public std::exception {
      public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
      public:
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif
