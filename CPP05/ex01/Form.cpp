/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Form.cpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/09 16:17:44 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/09 16:48:58 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), isSigned(false), reqSignGrade(150) ,reqGradeToExec(150) {}

Form::Form(const Form& otherObj): name(otherObj.name), isSigned(otherObj.isSigned), reqSignGrade(otherObj.reqSignGrade), reqGradeToExec(otherObj.reqGradeToExec) {}

Form::Form(const std::string n, const int rsg, const int rgte): name(n),  isSigned(false), reqSignGrade(rsg) , reqGradeToExec(rgte) {
  if (reqSignGrade < 1 || reqGradeToExec < 1)
    throw GradeTooHighException();
  if (reqSignGrade > 150 || reqGradeToExec > 150)
    throw GradeTooLowException();
}

Form& Form::operator=(const Form& otherObj) {
  if (this != &otherObj)
    isSigned = otherObj.isSigned;
  return *this;
}

Form::~Form() {}

/***************************************************************************************************/

const char* Form::GradeTooHighException::what() const throw() {return "Grade is too high!";};

const char* Form::GradeTooLowException::what() const throw() {return "Grade is too low!";};

/***************************************************************************************************/

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > reqSignGrade)
		throw (Form::GradeTooLowException());
	else
		this->isSigned = true;
}

std::ostream	&operator<<(std::ostream &out, Form const &form) {
	return out << form.getName() << " form, signed: " << form.getIsSigned() << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade();
}

/*****************************************************************************************************************************************************************/

bool Form::getIsSigned() const {return isSigned;}

std::string Form::getName() const{return name;}

int Form::getSignGrade() const {return reqSignGrade;}

int Form::getExecGrade() const {return reqGradeToExec;}
