/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Bureaucrat.cpp                                       :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/06 18:32:40 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/10 15:09:33 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw() {return "Grade is too high!";}

const char* Bureaucrat::GradeTooLowException::what() const throw() {return "Grade is too low!";}

Bureaucrat::Bureaucrat() : name("default"), grade(150) {}

Bureaucrat::Bureaucrat(const std::string n, int g) : name(n) {
  if (g < 1)
    throw GradeTooHighException();
  if (g > 150)
    throw GradeTooLowException();
  grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat& otherObj) : name(otherObj.name), grade(otherObj.grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& otherObj) {
  if (this != &otherObj)
    grade = otherObj.grade;
  return *this;
}

/********************************************************************************/

std::string Bureaucrat::getName() const {
  return name;
}

int Bureaucrat::getGrade() const {
  return grade;
}

void Bureaucrat::incrementGrade() {
  if (grade - 1 < 1)
    throw GradeTooHighException();
  --grade;
}

void Bureaucrat::decrementGrade() {
  if (grade + 1 > 150)
    throw GradeTooLowException();
  ++grade;
}

void Bureaucrat::signForm(Form &form) {
  try {
    form.beSigned(*this);
    std::cout << name << " signs " << form.getName() <<std::endl; 
  }
  catch (std::exception &e)
  {
    std::cout << name << " cannot sign " << form.getName() << " because: " << e.what() << std::endl;
  }		
}

/********************************************************************************/

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
 return out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
}
